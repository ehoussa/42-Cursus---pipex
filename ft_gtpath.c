/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtpath.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:05:04 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/30 23:53:11 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**ft_chrpath(char **envp)
{
	char	**path;
	int		i;

	i = 0;
	while (envp[i] && ft_memcmp(envp[i], "PATH", 4))
		i++;
	if (!envp[i])
		error(6);
	envp[i] += 5;
	path = ft_split(envp[i], ':');
	return (path);
}

char	*ft_gtpath(char **envp, char *cmd)
{
	int		i;
	char	**path;
	char	*s;

	path = ft_chrpath(envp);
	i = 0;
	if (cmd[0] != '/')
	{
		while (path[i])
		{
			s = ft_strjoin(path[i], "/");
			s = ft_strjoin(s, cmd);
			if (access(s, F_OK) == 0)
				return (s);
			i++;
		}
		free(s);
	}
	if (access(cmd, F_OK) == 0)
		return (cmd);
	if (cmd[0] == '/')
		error(4);
	error(3);
	return (0);
}

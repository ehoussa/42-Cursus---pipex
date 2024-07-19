/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:28:53 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/30 16:26:56 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_execve(int p[2], char **argv, char **envp)
{
	int		fd;
	char	**cmd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_access(argv[1]);
	close(p[0]);
	dup2(fd, 0);
	close(fd);
	dup2(p[1], 1);
	close(p[1]);
	cmd = ft_split(argv[2], ' ');
	execve(ft_gtpath(envp, cmd[0]), cmd, envp);
}

void	ft_execvetwo(int *p, char **argv, char **envp)
{
	int		fd;
	char	**cmd;

	fd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	close(p[1]);
	dup2(p[0], 0);
	close(p[0]);
	dup2(fd, 1);
	close(fd);
	cmd = ft_split(argv[3], ' ');
	execve(ft_gtpath(envp, cmd[0]), cmd, envp);
}

int	main(int argc, char **argv, char **envp)
{
	int	p[2];
	int	pid[2];

	if (argc != 5)
		error(7);
	if (pipe(p) == -1)
		error(1);
	pid[0] = fork();
	if (pid[0] == -1)
		error(2);
	if (pid[0] == 0)
		ft_execve(p, argv, envp);
	else
		pid[1] = fork();
	if (pid[1] == -1)
		error(2);
	if (pid[1] == 0)
		ft_execvetwo(p, argv, envp);
	close (p[0]);
	close (p[1]);
	waitpid(pid[0], NULL, 0);
	waitpid(pid[1], NULL, 0);
	return (0);
}

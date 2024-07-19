/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:30:44 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/30 16:09:03 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_gtpath(char **envp, char *cmd);
void	error(int i);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_access(char *filename);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_access.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:52:40 by ebakchic          #+#    #+#             */
/*   Updated: 2022/05/13 18:20:07 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_access(char *filename)
{
	if (access(filename, F_OK) == -1)
		error(4);
	if (access(filename, R_OK) == -1)
		error(5);
}
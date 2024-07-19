/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 08:28:47 by ebakchic          #+#    #+#             */
/*   Updated: 2021/12/14 05:23:26 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_upper(int k)
{
	char			*ar;
	int				j;
	unsigned int	r;

	r = (unsigned int)k;
	j = 1;
	if (r < 0)
		r = -r;
	ar = "0123456789ABCDEF";
	if (r < 16)
		write(1, &ar[r], 1);
	if (r >= 16)
	{
		j = j + ft_upper(r / 16);
		ft_upper(r % 16);
	}
	return (j);
}

static int	ft_lower(int k)
{
	char			*ar;
	int				j;
	unsigned int	r;

	r = (unsigned int)k;
	j = 1;
	if (r < 0)
		r = -r;
	ar = "0123456789abcdef";
	if (r < 16)
		write(1, &ar[r], 1);
	if (r >= 16)
	{
		j = j + ft_lower(r / 16);
		ft_lower(r % 16);
	}
	return (j);
}

int	ft_print_hex(int d1, char c)
{
	if (c == 'X')
		return (ft_upper(d1));
	else
		return (ft_lower(d1));
}

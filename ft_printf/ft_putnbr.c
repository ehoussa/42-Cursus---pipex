/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:18:23 by ebakchic          #+#    #+#             */
/*   Updated: 2021/12/14 05:43:24 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i, int z)
{
	long	f;

	f = (long)i;
	if (f < 0)
	{
		z = z + ft_putchar('-');
		f = -f;
	}
	if (f < 10)
		z = z + ft_putchar(f + '0');
	if (f >= 10)
	{
		ft_putnbr(f / 10, z);
		ft_putnbr(f % 10, z);
	}
	return (ft_lenbr(i));
}

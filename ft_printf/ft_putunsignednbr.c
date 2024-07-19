/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:40:11 by ebakchic          #+#    #+#             */
/*   Updated: 2021/12/13 08:05:25 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int n)
{
	unsigned long	i;

	i = (unsigned long)n;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i < 10)
		ft_putchar(i + '0');
	if (i >= 10)
	{
		ft_putunsignednbr(i / 10);
		ft_putunsignednbr(i % 10);
	}
	return (ft_lenbr(n));
}

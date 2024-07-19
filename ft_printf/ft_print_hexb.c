/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:39:38 by ebakchic          #+#    #+#             */
/*   Updated: 2021/12/14 05:28:39 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexb(void *k)
{
	char			*ar;
	int				j;
	unsigned long	r;

	r = (unsigned long)k;
	j = 1;
	if (r < 0)
		r = -r;
	ar = "0123456789abcdef";
	if (r < 16)
		write(1, &ar[r], 1);
	if (r >= 16)
	{
		j = j + ft_print_hexb((void *)(r / 16));
		ft_print_hexb((void *)(r % 16));
	}
	return (j);
}

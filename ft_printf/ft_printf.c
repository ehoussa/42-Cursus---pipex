/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:20:49 by ebakchic          #+#    #+#             */
/*   Updated: 2021/12/14 16:10:28 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printff(char c, va_list s)
{
	int	z;

	z = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(s, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(s, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(s, int), z));
	else if (c == 'u')
		return (ft_putunsignednbr(va_arg(s, int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(s, int), c));
	else if (c == 'p')
		return (write(1, "0x", 2) + ft_print_hexb(va_arg(s, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	s;
	int		i;
	char	*ar;
	int		z;

	z = 0;
	ar = (char *)str;
	va_start(s, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr(str[i + 1]) == 0)
		{
			z = z + ft_printff(str[i + 1], s);
			i += 2;
		}
		else
			z = z + write (1, &str[i++], 1);
	}
	va_end(s);
	return (z);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:01:49 by ebakchic          #+#    #+#             */
/*   Updated: 2021/12/14 05:42:35 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putnbr(int i, int z);
int	ft_putunsignednbr(unsigned int n);
int	ft_print_hex(int d1, char c);
int	ft_strchr(char c);
int	ft_lenbr(long n);
int	ft_print_hexb(void *k);

#endif

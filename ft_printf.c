/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:09:34 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/13 11:10:23 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list args, char *str)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (*str == 'd' || *str == 'i')
		return ((ft_ita(va_arg(args, int))));
	else if (*str == 'u')
		return (ft_putuns(va_arg(args, unsigned int)));
	else if (*str == 'x')
		return (ft_putnbr_hexx(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*str == 'X')
		return (ft_putnbr_hexx(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (*str == '%')
		return (ft_putchar('%'));
	else if (*str == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (-1);
}

int	ft_printf(const char *p, ...)
{
	va_list	args;
	int		count;
	int		check;

	count = 0;
	if (!p)
		return (-1);
	va_start(args, p);
	while (*p)
	{
		if (*p == '%' && *(p + 1))
			check = check_format(args, (char *)(++p));
		else
			check = ft_putchar(*p);
		if (check == -1)
		{
			va_end(args);
			return (-1);
		}
		count += check;
		p++;
	}
	va_end(args);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/02 12:34:12 by username         #+#    #+#              */
/*   Updated: 2026/10/10 21:10:44 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_formatin(va_list args, char *str, int count)
{
	if (*str == 'c')
		return (0);
	else if (*str == 'p')
		retun(0);
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	else if (*str == 'u')
		return (0);
	else if (*str == 'x')
		return (ft_putnbr_base(va_arg(args, int), "0123456789abcdef"));
	else if (*str == 'X')
		return (ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF"));
	else if (*str == '%')
		return (0);
	else if (*str == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (0);
}

int	ft_printf(const char *p, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!p)
		return (0);
	va_start(args, p);
	while (p)
	{
		if (*p == '%')
		{
			count += check_formatin(args, (char *) p, count);
		}
		else
		{
			count += ft_putchar(*p);
		}
		p++;
	}
	va_end(args);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:09:34 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 20:42:17 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_formatin(va_list args, char *str, int count, t_printf *head)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, char), head));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, void *), head));
	else if (*str == 'd' || *str == 'i')
		return ((ft_itoa(va_arg(args, int), head)));
	else if (*str == 'u')
		return (ft_putuns(va_arg(args, unsigned int)));
	else if (*str == 'x')
		return (ft_putnbr_hex(va_arg(args, int), head));
	else if (*str == 'X')
		return (ft_putnbr_Hex(va_arg(args, int), head));
	else if (*str == '%')
		return (ft_putchar('%', head));
	else if (*str == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (0);
}

int	ft_printf(const char *p, ...)
{
	va_list		args;
	int			count;
	t_printf	*head;

	head = NULL;
	count = 0;
	if (!p)
		return (-1);
	va_start(args, p);
	while (p)
	{
		if (*p == '%')
		{
			if (!check_formatin(args, (char *) p, count, head))
				return (-1);
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

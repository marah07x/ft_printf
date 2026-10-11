/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 12:34:12 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/11 13:56:30 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_formatin(va_list args, char *str, int count)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, char)));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	else if (*str == 'u')
		return (ft_putuns(va_arg(args, unsigned int)));
	else if (*str == 'x')
		return (ft_putnbr_base(va_arg(args, int), "0123456789abcdef"));
	else if (*str == 'X')
		return (ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF"));
	else if (*str == '%')
		return (putchar("%"));
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

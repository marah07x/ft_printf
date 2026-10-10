/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 12:34:12 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/10 11:46:31 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_formatin(va_list args, char *str)
{
	if (*str == 'c')
		return (0);
	else if (*str == 'p')
		retun(0);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_base(va_arg(args, int));
	else if (*str == 'u')
		return (0);
	else if (*str == 'x')
		return (0);
	else if (*str == 'X')
		return (0);
	else if (*str == '%')
		return (0);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *));
	return (0);
}

int	ft_printf(const char *p, ...)
{
	va_list	args;

	if (!p)
		return (0);
	va_start(args, p);
	while (p)
	{
		if (*p == '%')
		{
			p++;
			check_formating((char *) p);
		}
		else
		{
			ft_putchar(*p);
		}
		va_end(args);
	}
}

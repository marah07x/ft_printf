/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putptr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:10:09 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/13 11:03:46 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	len;

	if (!p)
	{
		return (ft_putstr("(nil)"));
	}
	if (ft_putstr("0x") != 2)
		return (-1);
	len = ft_putnbr_hexx((uintptr_t) p, "0123456789abcdef");
	if (len == -1)
		return (-1);
	return (len + 2);
}

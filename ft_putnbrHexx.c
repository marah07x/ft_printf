/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbrHexx.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:40:44 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 20:31:41 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_Hex(unsigned long nbr, t_printf *head)
{
	unsigned int	index;
	unsigned int	len;
	char			*num;
	char			*base;

	base = "0123456789ABCDEF";
	index = 0;
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	len = numlen(nbr);
	while (nbr > 0 && index++)
	{
		num[index] = base[nbr % 16];
		nbr /= 16;
	}
	num[index] = '\0';
	ft_lstadd_back(&head, ft_lstnew(ft_strdup(num)));
	return (len);
}

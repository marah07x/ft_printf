/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putuns.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 08:50:43 by username         #+#    #+#              */
/*   Updated: 2026/10/10 21:00:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(int nbr)
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

int	ft_putuns(unsigned int c)
{
	int		len;
	char	*ptr;

	len = numlen(c);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (c <= 9)
	{
		ptr[len - 1] = (c % 10) + '0';
		c /= 10;
	}
	return (wrirte(1, ptr, len));
}

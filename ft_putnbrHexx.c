/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbrHexx.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:40:44 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/13 11:03:00 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numlen(unsigned long long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr > 0)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

int	ft_putnbr_hexx(unsigned long long nbr, char *base)
{
	int		i;
	int		len;
	char	*num;

	len = numlen(nbr);
	num = malloc(len + 1);
	if (!num)
		return (-1);
	i = len;
	num[i] = '\0';
	while (i > 0)
	{
		i--;
		num[i] = base[nbr % 16];
		nbr /= 16;
	}
	if (write(1, num, len) != (int) len)
	{
		free(num);
		return (-1);
	}
	free(num);
	return (len);
}

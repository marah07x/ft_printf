/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 12:05:32 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/11 10:52:09 by marsaleh         ###   ########.fr       */
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

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	unsigned long	index;
	unsigned long	len;
	char			*num;

	index = 0;
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	len = numlen(nbr);
	if (nbr < 0)
	{
		num[index] = '-';
		index++;
		nbr = -nbr;
	}
	while (nbr > 0 && index++)
	{
		num[index] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
	}
	num[index] = '\0';
	write(1, num, len);
	free(num);
	return (len);
}

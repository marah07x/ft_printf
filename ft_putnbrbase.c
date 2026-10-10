/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbrbase.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 12:05:32 by username         #+#    #+#              */
/*   Updated: 2026/10/10 19:44:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_base(int len, char *base)
{
	int	index;

	index = 0;
	if (len <= 1)
		return ;
	while (base[index] != '\0')
	{
		if (base[index] == 43 || base[index] == 45)
			return ;
		index++;
	}
}

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

int	ft_putnbr_base(int nbr, char *base)
{
	int		index;
	int		len_base;
	int		len;
	char	*ptr;

	index = 0;
	len_base = ft_strlen(base);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	check_base(len_base, base);
	len = numlen(nbr);
	if (nbr < 0)
	{
		ptr[index] = '-';
		index++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		ptr[index] = base[nbr % len_base];
		nbr /= len_base;
		index++;
	}
	ptr[index] = '\0';
	return (write(1, ptr, len));
}

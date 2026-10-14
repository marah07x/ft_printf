/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putuns.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 08:50:43 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/12 20:29:55 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numlen(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
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
	int		i;
	char	*unnum;

	len = numlen(c);
	i = 0;
	unnum = malloc(len + 1);
	if (!unnum)
		return (-1);
	i = len;
	unnum[len] = '\0';
	while (i > 0)
	{
		unnum[i - 1] = (c % 10) + '0';
		c /= 10;
		i--;
	}
	if (write(1, unnum, len) != len)
	{
		free(unnum);
		return (-1);
	}
	free(unnum);
	return (len);
}

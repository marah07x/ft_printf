/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putuns.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 08:50:43 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 19:28:01 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(unsigned int nbr)
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

int	ft_putuns(unsigned int c, t_printf *head)
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
	lst_add_back(&head, lst_new(ptr));
}

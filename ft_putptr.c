/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putptr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:10:09 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 20:41:03 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(unsigned char *s)
{
	int	len;

	while (s)
	{
		len++;
		s++;
	}
	return (len);
}

int	ft_putptr(void *p, t_printf *head)
{
	unsigned long	address;
	char			*hex;
	char			*full;
	int				len;

	if (!p)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_strdup("(nil)")));
		return (5);
	}
	address = (unsigned long) p;
	hex = ft_putnbr_hex(address, head);
	full = ft_strjoin_lst("0x", hex, head);
	free(hex);
	ft_lstadd_back(&head, ft_lstnew(ft_strdup(full)));
	len = ft_strlen(full);
	return (len);
}

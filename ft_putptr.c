/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:51:23 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/11 13:05:40 by marsaleh         ###   ########.fr       */
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

int	ft_putptr(void *c)
{
	unsigned long	address;

	write(1, "0x", 2);
}

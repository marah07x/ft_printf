/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 12:51:23 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/11 09:20:33 by marsaleh         ###   ########.fr       */
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

void	ft_putptr(void *c)
{
	unsigned char	*s;
	char			*p;
	int				i;
	int				len;

	len = ft_len(s);
	s = (unsigned char *) c;
	i = 2;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[0] = '0';
	p[1] = 'x';
	while (i < len)
	{
		p[i] =
	}
}

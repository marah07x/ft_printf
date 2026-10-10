/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:39:12 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/10 12:37:55 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destl;
	const unsigned char	*srcl;

	destl = (unsigned char *) dest;
	srcl = (const unsigned char *) src;
	if (destl > srcl)
	{
		while (n != 0)
		{
			n--;
			destl[n] = srcl[n];
		}
	}
	else
	{
		while (n != 0)
		{
			*destl++ = *srcl++;
			n--;
		}
	}
	return (dest);
}
/*

int	main(void)
{
size_t	n;
char	*b;
char	*l;
char	*j;
char	h[] = "hello basil";

n = 3;
b = ft_memmove(&h[4], h, 5);
printf("%s\n", b);
}
*/

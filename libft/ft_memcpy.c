/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:09:53 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/03 14:28:40 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destl;
	const unsigned char	*srcl;

	destl = (unsigned char *)dest;
	srcl = (const unsigned char *)src;
	while (n != 0)
	{
		*destl = *srcl;
		destl++;
		srcl++;
		n--;
	}
	return (dest);
}
/*int	main(void)
{
char	*a;
size_t	n;
char	*b;
char	s[] = "0123456 my is joyy";

char	h[]= ;
n = 5;
b = ft_memcpy(h, s, n);
printf("%s\n", a);
printf("%s", b);
}
*/

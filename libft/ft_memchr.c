/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:12:23 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 10:22:31 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*sl;

	sl = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*sl == (unsigned char)c)
			return ((void *)sl);
		i++;
		sl++;
	}
	return (NULL);
}

/*
int	main(void)
{
char	*i;
char	x;

x = 'a';
i = "marah";
printf("%s\n", ft_memchr(i, x, 5));
printf("%s", memchr(i, x, 5));
}
*/

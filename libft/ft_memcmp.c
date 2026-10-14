/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:28:38 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/04 10:36:14 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1l;
	const unsigned char	*s2l;

	i = 0;
	s2l = (const unsigned char *)s2;
	s1l = (const unsigned char *)s1;
	while (i < n)
	{
		if (s1l[i] != s2l[i])
		{
			return (s1l[i] - s2l[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	*str1 = NULL;
char	*str2 = NULL;
size_t	n;

n = 5;
//printf("%d\n", ft_memcmp(str1, str2, n));
printf("%d", memcmp(str1, str2, n));
}

*/

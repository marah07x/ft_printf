/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:30:13 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/04 11:16:21 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned const char	*s1l;
	unsigned char		*s2l;

	i = 0;
	s2l = (unsigned char *)s2;
	s1l = (unsigned const char *)s1;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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

int	main(void)
{
char	*str1 = "test";
char	*str2 = "test";
size_t	len = strlen((const char *) str1);

n = -1;
printf("%d\n", ft_strncmp(str1, str2, len));
printf("%d", strncmp(str1, str2, len));
}
*/

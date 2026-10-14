/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:00:57 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/01 09:23:56 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	srclen = 0;
	i = 0;
	while (src[i] != '\0')
	{
		srclen += 1;
		i++;
	}
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*
#include <bsd/string.h>

int	main(void)
{
char	*dst[] = "";
char	*src = "";

//printf("%zu\n", ft_strlcpy(dst, src, 9));
//printf("%zu", strlcpy(dst, src, 9));
}*/

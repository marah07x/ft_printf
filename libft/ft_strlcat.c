/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marahsaleh@student.42amman.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/22 17:08:08 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/04 13:42:52 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (destlen >= size)
		return (srclen + size);
	i = destlen;
	x = 0;
	while (src[x] != '\0' && i < size - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (destlen + srclen);
}
/*
#include <bsd/string.h>

int	main(void)
{
char	dst[] = "marah";
char	src[] = NULL;

char	*temp = NULL;
char	*temp1 = NULL;

int		s = ft_strlcat(temp,temp1,5);
printf("%p", src);
printf("%zu\n", ft_strlcat(dst, src, 1));
printf("%zu", strlcat(dst, src, 1));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:55:33 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/04 09:35:10 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t				i;
	unsigned const char	*sl;

	i = 0;
	sl = (unsigned const char *)s;
	while (*sl != '\0')
	{
		if (*sl == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
		sl++;
	}
	if (c == 0)
	{
		if (*sl == (unsigned char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
/*int	main(void)
{
char	*i;
char	x;

x = 'a';
i = "marah";
printf("%s\n", ft_strcrhr(i, x));
printf("%s", strrchr(i, x));
}*/

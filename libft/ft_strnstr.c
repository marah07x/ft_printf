/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:49:11 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 10:43:05 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	counter;

	counter = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && big[i + j] != '\0')
		{
			j++;
		}
		if (j == counter)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>

int	main(void)
{
char	*str = "rainbowdash and fluttershy";
char	*to_find = "bow";
int		i;

printf("%s", ft_strnstr(str, to_find, 3));
}
*/

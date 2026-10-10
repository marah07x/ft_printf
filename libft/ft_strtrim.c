/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:53:05 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 11:23:19 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*fill_new(char *new_s1, const char *s1, size_t s11, size_t s2)
{
	size_t	i;

	i = 0;
	while (s11 < s2)
	{
		new_s1[i] = s1[s11];
		i++;
		s11++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	point1;
	size_t	point2;
	char	*new_s1;

	if (!s1)
		return (NULL);
	point1 = 0;
	while (s1[point1] && check_set(s1[point1], set))
		point1++;
	point2 = ft_strlen(s1);
	while (point1 < point2 && check_set(s1[point2 - 1], set))
		point2--;
	new_s1 = malloc(sizeof(char) * (point2 - point1 + 1));
	if (!new_s1)
	{
		return (NULL);
	}
	new_s1 = fill_new(new_s1, s1, point1, point2);
	return (new_s1);
}
/*

int	main(void)
{
char			str[] = "niiirbow dash and fluttershy rain";
char			str2[] = "rain";
char			*p;

p = ft_strtrim(str, NULL);
if (!p)
return (0);
printf("%s", p);
free(p);
return (0);
}
*/

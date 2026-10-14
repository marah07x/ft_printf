/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marahsaleh@student.42amman.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 09:47:00 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/01 14:17:54 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*toobig(char *new_s)
{
	if (!(new_s))
		return (NULL);
	new_s[0] = '\0';
	return (new_s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	if (!(s))
		return (NULL);
	if (start >= ft_strlen(s))
	{
		new_s = malloc(1);
		return (toobig(new_s));
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
int	main(void)
{
char		*str = "rainbowdash";
char		*p;

p = ft_substr(str, 0, 3);
if (!p)
return (0);
printf("%s", p);
free(p);
return (0);
}
*/

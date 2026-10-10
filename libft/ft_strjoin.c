/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marahsaleh@student.42amman.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 10:35:58 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/08 09:13:25 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	char	*k;

	if (!s1 || !s2)
		return (NULL);
	new_s = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!new_s)
		return (NULL);
	k = new_s;
	while (*s1)
	{
		*new_s = *s1;
		s1++;
		new_s++;
	}
	while (*s2)
	{
		*new_s = *s2;
		s2++;
		new_s++;
	}
	*new_s = '\0';
	return (k);
}
/*

int	main(void)
{
char	*str = "rainbow";
char	*str2 = "dash";
char	*p;

p = ft_strjoin(str, str2);
if (!p)
return (0);
printf("%s", p);
free(p);
return (0);
}
*/

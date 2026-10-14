/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 08:41:29 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/04 11:23:05 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	char	*l;

	new_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_s)
	{
		return (NULL);
	}
	l = new_s;
	while (*s)
	{
		*new_s = *s;
		s++;
		new_s++;
	}
	*new_s = '\0';
	return (l);
}
/*

int	main(void)
{
char	*meow;
char	*p;
char	*o;

meow = NULL;
p = ft_strdup(meow);
o = strdup(meow);
if (!o)
return (0);
printf("%s", o);
free(p);
return (0);
}
*/

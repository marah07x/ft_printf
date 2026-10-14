/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:35:16 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 12:31:39 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int i, char *c)
{
unsigned int	i;

if (*c >= 'a' && *c <= 'z')
*c -= 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if ((!s || !f))
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		++i;
	}
}
/*
int	main(void)
{
char	l[] = "marah";

ft_striteri(l, f);
printf("%s", l);
return (0);
}
*/

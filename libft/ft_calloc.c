/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:01:45 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/03 07:49:55 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	i;

	i = (size_t)-1;
	if (nmemb != 0 && size > (i / nmemb))
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}
/*

int	main(void)
{
size_t	nmemb;
size_t	size;
size_t	i;
char	*p;

nmemb = 10;
size = 1;
p = ft_calloc(nmemb, size);
if (!p)
return (0);
for		(i = 0; i < nmemb * size; i++)
printf("%d", p[i]);
free(p);
return (0);
}
*/

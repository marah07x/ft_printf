/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:37:32 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 12:23:58 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *sentence, size_t n)

{
	unsigned char	*sentencel;

	sentencel = (unsigned char *) sentence;
	while (n != 0)
	{
		*sentencel = '\0';
		sentencel++;
		n--;
	}
}
/*

int	main(void)
{
size_t	n;
char	h[] = "marah is a student at yu";
int		i;
int		count;

count = 0;
i = strlen(h);
n = 3;
ft_bzero(h, n);
while (count < 3)
{
printf("%d", h[count]);
count++;
}
//printf("%d\n", h);
//bzero(h, n);
//printf("%d\n", h);
}
*/

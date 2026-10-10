/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:32:51 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 12:24:25 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *word)

{
	size_t	i;

	i = 0;
	while (word[i])
		i++;
	return (i);
}
/*
int	main(void)
{
char	word[] = "marah";

printf("%zu", ft_strlen(word));
}
*/

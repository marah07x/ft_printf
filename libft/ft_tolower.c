/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_tolower.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marahsaleh@student.42amman.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/23 09:49:26 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/04 13:47:47 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*

int	main(void)
{
char	i;

i = 'A';
printf("%c\n", ft_tolower(i));
printf("%c", tolower('B'));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:29:02 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 11:27:33 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace_count(const char *str, int index)
{
	while ((str[index] != '\0' && (str[index] >= 9 && str[index] <= 13))
		|| str[index] == ' ')
		index++;
	return (index);
}

int	ft_atoi(const char *nptr)
{
	int		index;
	long	n;
	int		sign;

	sign = 1;
	index = 0;
	n = 0;
	index = whitespace_count(nptr, index);
	if ((nptr[index] == '-') || (nptr[index] == '+'))
	{
		if (nptr[index] == '-')
			sign *= -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		n = n * 10 + (nptr[index] - '0');
		index++;
	}
	n *= sign;
	return ((int)n);
}
/*

int	main(void)
{
char		str[] = "+1234ab567";

printf("%d\n", ft_atoi(str));
printf("%d\n", atoi(str));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marahsaleh@student.42amman.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/25 10:43:25 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/04 13:39:55 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	result_filler(char *result, size_t len, long num)
{
	if (num == 0)
	{
		result[0] = '0';
	}
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	long	num;

	num = n;
	len = check_len(num);
	result = malloc(sizeof(char) * (len + 1));
	if (!(result))
		return (NULL);
	result[len] = '\0';
	result_filler(result, len, num);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
int				i;
char			*t;

i = 11;
t = ft_itoa(i);
printf("marah");
printf("%s", t);
}
*/

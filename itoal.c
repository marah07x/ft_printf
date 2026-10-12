/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   itoal.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:14:17 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 19:33:07 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	check_len(int n)
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

void	result_filler(char *result, size_t len, long num, t_printf *head)
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
	lst_add_back(&head, lst_new(result));
}

int	ft_itoa(int n, t_printf *head)
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
	result_filler(result, len, num, head);
	return (len);
}

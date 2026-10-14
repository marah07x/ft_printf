/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:10:02 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/12 19:53:39 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		return (ft_putstr("(null)"));
	}
	len = ft_strlen(str);
	if ((write(1, str, ft_strlen(str)) != len))
		return (-1);
	return (len);
}

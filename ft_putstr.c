/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:10:02 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 19:30:52 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, t_printf *head)
{
	int	len;

	len = ft_strlen(str);
	ft_lstadd_back(&head, ft_lstnew(ft_strdup(str)));
	return (len);
}

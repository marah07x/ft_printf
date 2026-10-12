/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putchar.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:09:52 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 19:09:52 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, t_printf *head)
{
	t_printf	*new;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup(&c)));
	return (1);
}

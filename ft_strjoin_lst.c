/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin_lst.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 20:34:16 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 20:37:20 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2, t_printf *head)
{
	char	*new_s;
	char	*k;

	if (!s1 || !s2)
		return (NULL);
	new_s = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!new_s)
		return (NULL);
	k = new_s;
	while (*s1)
	{
		*new_s = *s1;
		s1++;
		new_s++;
	}
	while (*s2)
	{
		*new_s = *s2;
		s2++;
		new_s++;
	}
	*new_s = '\0';
	return (k);
}

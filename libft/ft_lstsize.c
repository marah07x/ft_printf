/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:23:40 by marsaleh          #+#    #+#             */
/*   Updated: 2026/09/30 09:34:36 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*head;
	unsigned int	len;

	len = 0;
	head = lst;
	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}
/*

int	main(void)
{
char			*str1;
char			*str2;
t_list			*head;
t_list			*node1 = ft_lstnew("marah");
t_list			*node2 = ft_lstnew("joy");

head = node1;
node1->next = node2;
printf("%d", ft_lstsize(head));
free(node1);
free(node2);
return (0);
}
*/

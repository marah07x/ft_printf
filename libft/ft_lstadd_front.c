/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:16:00 by marsaleh          #+#    #+#             */
/*   Updated: 2026/09/29 08:58:33 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(new) || !(lst))
		return ;
	new->next = *lst;
	*lst = new;
}
/*

int	main(void)
{
char	*str1;
char	*str2;
t_list	*head;
t_list	*meow;
t_list	*node1 = ft_lstnew(str1);
t_list	*node2 = ft_lstnew(str2);

head = NULL;
str1 = "marah";
str2 = "joy";
ft_lstadd_front(&head, node1);
ft_lstadd_front(&head, node2);
while (head)
{
printf("%s ", (char *) head->content);
head = head->next;
}
free(node1);
free(node2);
return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 08:09:04 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/10 12:39:35 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
t_list	*head;
t_list	*meow;
char	*str1;

head = NULL;
t_list	*node1 = ft_lstnew(strdup("joy is joyful"));
t_list	*node2 = ft_lstnew(strdup("jjjjjjjj"));
t_list	*node3 = ft_lstnew(strdup("mmmmmmmmm"));

if ft_lstadd_back(&head, node1);
ft_lstadd_back(&head, node2);
ft_lstadd_back(&head, node3);
node1->next = node2->next;
ft_lstdelone(node2, del);
meow = head;
while (meow)
{
printf("%s ", (char *) meow->content);
meow = meow->next;
}
ft_lstclear(&head, del);
}
*/

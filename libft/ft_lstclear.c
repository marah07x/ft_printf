/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marahsaleh@student.42amman.com> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 12:15:52 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/04 13:40:14 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
free(content);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (!(lst) || !(del))
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp->next;
		del(temp->content);
		free(temp);
		temp = next;
	}
	*lst = NULL;
}
/*

int	main(void)
{
char	*str1;
char	*str2;
t_list	*head;
t_list	*meow;
t_list	*node1 = ft_lstnew(strdup(str1));
t_list	*node2 = ft_lstnew(strdup(str2));

head = NULL;
str1 = "marah";
str2 = "joy";
ft_lstadd_back(&head, node1);
ft_lstadd_back(&head, node2);
meow = head;
while (meow)
{
printf("%s\n", (char *) meow->content);
meow = meow->next;
}
ft_lstclear(&head, del);
if (!head)
printf("lllll");
printf("%p", (void *) head);
return (0);
}
*/

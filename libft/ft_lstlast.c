/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 07:13:12 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/03 14:16:39 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*head;

	if (!(lst))
		return (NULL);
	head = lst;
	while (head->next)
	{
		head = head->next;
	}
	return (head);
}
/*

int	main(void)
{
char	*str1;
char	*str2;
t_list	*head;
t_list	*node1 = ft_lstnew(NULL);
t_list	*node2 = ft_lstnew(NULL);

head = node1;
node1->next = node2;
printf("%s", (char *) ft_lstlast(head)->content);
free(node1);
free(node2);
return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:40:46 by marsaleh          #+#    #+#             */
/*   Updated: 2026/09/30 09:22:28 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(void *content)
{
char	*str;
int		i;

i = 0;
str = (char *) content;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
}
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*

int	main(void)
{
char	*str1;
char	*str2;
t_list	*meow;
t_list	*head = NULL;
t_list	*node1 = ft_lstnew(strdup("marah"));
t_list	*node2 = ft_lstnew(strdup("joy"));

ft_lstadd_back(&head, node1);
ft_lstadd_back(&head, node2);
ft_lstiter(head, f);
meow = head;
while (meow)
{
printf("%s ", (char *) meow->content);
meow = meow->next;
}
free(node1);
free(node2);
return (0);
}
*/

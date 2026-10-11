/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 08:50:22 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/11 13:35:17 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*f(void *content)
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
	return (content);
}

void	del(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*node;
	void	*content;

	newl = NULL;
	node = NULL;
	if (!(lst) || !(f) || !(del))
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!(node))
		{
			del(content);
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, node);
		lst = lst->next;
	}
	return (newl);
}
/*

int	main(void)
{
t_list	*meow;
t_list	*head = NULL;
t_list	*m = NULL;

ft_lstadd_back(&head, ft_lstnew(strdup("marah")));
ft_lstadd_back(&head, ft_lstnew(strdup("joy")));
m = ft_lstmap(head, f, del);
meow = m;
while (meow)
{
printf("%p ", (void *) meow->next);
meow = meow->next;
}
ft_lstclear(&head, del);
ft_lstclear(&m, del);
return (0);
}
*/

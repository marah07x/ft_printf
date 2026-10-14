/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 08:04:44 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/04 09:27:38 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!(s))
		return ;
	while (s[count])
	{
		write(fd, &s[count], 1);
		count++;
	}
}
/*

int	main(void)
{
ft_putstr_fd("meow", 2);
}
*/

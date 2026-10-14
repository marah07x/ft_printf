/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 08:15:30 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 11:08:32 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
		return ;
	}
	ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd(((n % 10) + '0'), fd);
}
/*
int	main(void)
{
int		nb1;
int		nb2;
int		nb3;

nb1 = 0;
nb2 = -42;
nb3 = 46880002;
ft_putnbr_fd(nb1, 2);
write(1, "\n", 1);
ft_putnbr_fd(nb2, 2);
write(1, "\n", 1);
ft_putnbr_fd(nb3, 2);
}
*/

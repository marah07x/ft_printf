/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/10 09:00:37 by username         #+#    #+#              */
/*   Updated: 2026/10/10 19:53:38 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *p, ...);

int	ft_putchar(char c);
int	ft_putstr(char *s);

int	ft_putnbr(int n);
int	ft_putnbr_base(int nbr, char *base);
int	ft_putuns(unsigned int c);
int	check_formating(char *str);

#endif

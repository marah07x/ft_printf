/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:09:44 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/13 11:02:37 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

int	ft_printf(const char *p, ...);

int	ft_putchar(int c);
int	ft_putstr(char *s);

int	ft_ita(int n);
int	ft_putnbr_hexx(unsigned long long nbr, char *base);
int	ft_putuns(unsigned int c);
int	ft_putptr(void *p);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/11 19:09:44 by marsaleh         #+#    #+#              */
/*   Updated: 2026/10/11 19:17:51 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *p, ...);

int	ft_putchar(char c, t_printf *head);
int	ft_putstr(char *s, t_printf *head);

int	ft_itoa(int n, t_printf *head);
int	ft_putnbr_base(int nbr, char *base);
int	ft_putuns(unsigned int c);
int	check_formating(char *str);
typedef struct s_printf
{
	void			*content;
	struct s_printf	*next;

}	t_printf;
#endif

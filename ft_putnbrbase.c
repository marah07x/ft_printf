/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 12:05:32 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/10 12:05:42 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

void	check_base(int len, char *base)
{
	int	index;

	index = 0;
	if (len <= 1)
		return ;
	while (base[index] != '\0')
	{
		if (base[index] == 43 || base[index] == 45)
			return ;
		index++;
	}
}

int	check_duplicate(int len, char *base)
{
	int	index;
	int	a_index;

	index = 0;
	while (base[index] != '\0')
	{
		a_index = index + 1;
		while (base[a_index] != '\0')
		{
			if (base[index] == base[a_index])
				return (1);
			a_index++;
		}
		index++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	index;
	int	len;
	int	mod;

	index = 0;
	mod = 0;
	len = ft_strlen(base);
	check_base(len, base);
	if (check_duplicate(len, base) != 0)
		return ;
	if (nbr < 0)
	{
		mod = (nbr % len);
		write(1, "-", 1);
		ft_putnbr_base(-(nbr / len), base);
		write(1, &base[-mod], 1);
		return ;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
	}
	write(1, &base[nbr % len], 1);
}

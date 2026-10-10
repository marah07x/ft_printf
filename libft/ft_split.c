/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marahsaleh@student.42amman.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 08:47:14 by marsaleh          #+#    #+#             */
/*   Updated: 2026/10/08 09:55:45 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(const char *s, char c)
{
	size_t	word_count;
	size_t	i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			word_count++;
		i++;
	}
	return (word_count);
}

static char	*creat_word(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * (len + 1));
	if (!(word))
		return (NULL);
	i = 0;
	while (*s && len > 0)
	{
		word[i] = *s;
		i++;
		len--;
		s++;
	}
	word[i] = '\0';
	return (word);
}

static int	freee(char **result, size_t i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
	return (0);
}

static int	fill_result(char **result, const char *s, char c, size_t i)
{
	size_t	k;

	k = 0;
	while (*s)
	{
		if (*s != c)
			k++;
		else if (k)
		{
			result[i] = creat_word(s - k, k);
			if (!(result[i++]))
				return (freee(result, i - 1));
			k = 0;
		}
		s++;
	}
	if (k)
	{
		result[i] = creat_word(s - k, k);
		if (!(result[i++]))
			return (freee(result, i - 1));
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	i = 0;
	if (!(s))
		return (NULL);
	result = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!(result))
		return (NULL);
	if (!(fill_result(result, s, c, i)))
		return (NULL);
	return (result);
}
/*
int	main(void)
{
char			*str = "rain bow dash and fluttershy rain";
char			c = ' ';
char			**p;
size_t			i;

i = 0;
p = ft_split(str, c);
if (!p)
return (0);
while (p[i])
{
printf("%s\n", p[i]);
free(p[i]);
i++;
}
free(p);
return (0);
}
*/

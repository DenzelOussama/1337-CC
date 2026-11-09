/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:59:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/09 16:43:03 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			words++;
		while (*str && *str != c)
			str++;
	}
	return (words);
}

static void	ft_free(char **str, int j)
{
	while (j >= 0)
		free(str[j--]);
	free(str);
}

static size_t	ft_len_of_word(const char *st, int start, char c)
{
	size_t	len;
	size_t	i;

	i = start;
	while (st[i] && st[i] != c)
		i++;
	len = i - start;
	return (len);
}

static char	**ft_store_word(const char *st, char c, char **str, int n)
{
	size_t	i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	while (st[i] && j < n)
	{
		while (st[i] && st[i] == c)
			i++;
		if (!st[i])
			break ;
		len = ft_len_of_word(st, i, c);
		str[j] = ft_substr(st, i, len);
		if (!str[j])
		{
			ft_free(str, j);
			return (NULL);
		}
		i += len;
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**str;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	return (ft_store_word(s, c, str, words));
}

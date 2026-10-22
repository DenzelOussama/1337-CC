/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:59:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/22 18:54:44 by olgarh           ###   ########.fr       */
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

static char	**ft_store_word(const char *st, char c, char **str, int n)
{
	size_t	i;
	int	j;
	size_t	start;
	size_t	end;

	(1) && (i = 0, start = 0, end = 0, j = 0);
	while (j < n)
	{
		while (st[i])
		{
			while (st[i] && st[i] == c)
				i++;
			if (!st[i])
				break ;
			start = i;
			while (st[i] && st[i] != c)
				i++;
			end = i;
			str[j] = ft_substr(st, start, (end - start));
			if (!str[j])
			{
				ft_free(str, j);
				return (NULL);
			}
			j++;
		}
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**str;
	
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);

	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	return (ft_store_word(s, c, str, words));
}

int    main(void)
{
    char *in[] = {"hello world", "  hello   world  ", "hello", "", "     ",
        "a,b,,c", ",,,a,,,", "a"};
    char sep[] = {' ', ' ', ' ', ' ', ' ', ',', ',', 'a'};
    int words[] = {2, 2, 1, 0, 0, 3, 1, 0};
    char **r;
    int t;
    int i;

    t = 0;
    while (t < 8)
    {
        r = ft_split(in[t], sep[t]);
        i = 0;
        while (r && r[i])
            i++;
        printf("%d: %s (got %d words, expected %d)\n", t + 1, (r
                && i == words[t]) ? "worked" : "NOT worked", i, words[t]);
        i = 0;
        while (r && r[i])
            free(r[i++]);
        free(r);
        t++;
    }
    printf("9: %s\n", ft_split(NULL, ' ') == NULL ? "worked" : "NOT worked");
    return (0);
}
// char **strs = {hello,scnuch,vsv};
// char c = ',';
// output = helloscnuchvsv;
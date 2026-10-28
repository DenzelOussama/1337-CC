/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:59:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/28 11:15:53 by olgarh           ###   ########.fr       */
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
	size_t	start;
	size_t	len;

	(1) && (i = 0, start = 0, len = 0, j = 0);
	while (st[i] && j < n)
	{
		while (st[i] && st[i] == c)
			i++;
		if (!st[i])
			break ;
		start = i;
		len = ft_len_of_word(st, start, c);
		i = start + len;
		str[j] = ft_substr(st, start, len);
		if (!str[j])
		{
			ft_free(str, j);
			return (NULL);
		}
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

// static void	test_split(char const *str, char c)
// {
// 	char	**result;
// 	int		i;

// 	printf("\nInput: \"%s\" | Delimiter: '%c'\n", str, c);
// 	result = ft_split(str, c);
// 	if (!result)
// 	{
// 		printf("Returned NULL\n");
// 		return ;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = \"%s\"\n", i, result[i]);
// 		i++;
// 	}
// 	printf("Number of words: %d\n", i);
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }

// int	main(void)
// {
// 	printf("=== FT_SPLIT TESTS ===\n");
// 	test_split("hello world", ' ');
// 	test_split("hello   world", ' ');
// 	test_split("   hello world   ", ' ');
// 	test_split("hello", ' ');
// 	test_split("", ' ');
// 	test_split("      ", ' ');
// 	test_split("hello,world,42", ',');
// 	test_split(",,,hello,,,42,,,", ',');
// 	test_split("hello", 'h');
// 	test_split("42 school", 'x');
// 	test_split("a:b::c:", ':');
// 	test_split("  hello  42  ", ' ');
// 	test_split("abc", '\0');
// 	test_split("a\0b", ' ');
// 	test_split("111222333", '2');
// 	test_split("a b c d", ' ');
// 	test_split("42", '4');
// 	test_split("42", '2');
// 	test_split("", '\0');
// 	test_split("abc", 'b');
// 	test_split("   ", ' ');
// 	test_split("abc", 'x');
// 	return (0);
// }

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:32:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/21 18:16:17 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static	int	helperfunction(char const *str, char c)
{
	if (!ft_strchr(str, (int)c))
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	count;
	size_t	i;
	size_t	j;

	(1) && (j = ft_strlen(s1) - 1, i = 0);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (i != j + 1)
	{
		while (j && helperfunction(set, s1[j]))
			j--;
	}
	count = j - i + 1;
	p = malloc(count + 1);
	if (!p)
		return (NULL);
	j = 0;
	while (j < count)
		p[j++] = s1[i++];
	p[j] = '\0';
	return (p);
}
// int main(void)
// {
//     char *res;

//     res = ft_strtrim("   hello world   ", " "); 
// expected output: "hello world"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("xxzzyhello worldyyzzxx", "xyz"); 
// expected output: "hello world"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("   hello world", " ");
// expected output: "hello world"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("hello world   ", " "); 
// expected output: "hello world"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("hello world", " "); 
// expected output: "hello world"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("xxxxx", "x"); 
// expected output: ""
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("xyzxyzxyz", "xyz"); // expected output: ""
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("", "x"); // expected output: ""
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("hello world", "");
// expected output: "hello world"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("", ""); // expected output: ""
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("xhelloxworldx", "x"); 
// expected output: "helloxworld"
//     printf("%s\n", res);
//     free(res);

//     res = ft_strtrim("\t\n  hello 42 \t\n", " \n\t");
// expected output: "hello 42"
//     printf("%s\n", res);
//     free(res);

//     return (0);
// }
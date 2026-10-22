/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:27:17 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/19 15:32:13 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (!str)
		return (NULL);
	p = (char *)s;
	i = 0;
	while (i < len)
	{
		str[i] = p[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char *ft_substr(char const *s, unsigned int start,size_t len)
// {
//     char	*str;
//     char	*p;
//     size_t	i;
//     size_t	alloc_amount;
// 	size_t	slen;

//     if(!s)
// 		return (NULL);
// 	slen = ft_strlen(s);
// 	i = 0;
//     if (slen  <= start)
//     {
//         str = (char *)malloc(sizeof(char));
//         if(!str)
//             return(NULL);
//         *str ='\0';
//         return (str);
//     }
// 	alloc_amount = slen - start;
// 	if ( len < slen - start )
// 		alloc_amount = len;
//     str = (char *)malloc(sizeof(char)*(alloc_amount) + 1);
//     if(!str)
//         return(NULL);
//     p = (char *)s;
//     while (i < alloc_amount)
//     {
//         str[i] = p[start + i];
//         i++;
//     }
//     str[i] = '\0';
//     return(str);
// }
// int main(void)
// {
//     char *s1 = ft_substr("Hello, World!", 7, 5);
//     char *s2 = ft_substr("Hello", 10, 3);
//     char *s3 = ft_substr("1337 Rabat", 5, 50);
//     char *s4 = ft_substr("Libft", 0, 5);
//     char *s5 = ft_substr("Testing", 3, 0);

//     printf("Normal:      [%s] | expected: [World]\n", s1);
//     printf("Start > len: [%s] | expected: []\n", s2);
//     printf("Len too big: [%s] | expected: [Rabat]\n", s3);
//     printf("Start = 0:   [%s] | expected: [Libft]\n", s4);
//     printf("Len = 0:     [%s] | expected: []\n", s5);

//     free(s1);
//     free(s2);
//     free(s3);
//     free(s4);
//     free(s5);
//     return (0);
// }
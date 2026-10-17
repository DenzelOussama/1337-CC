/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:31:08 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/16 11:55:23 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = 0;
	while (dlen < size && dst[dlen] != '\0')
	{
		dlen++;
	}
	if (size <= dlen)
	{
		return (size + slen);
	}
	i = 0 ;
	while (src[i] != '\0' && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

// int main(void)

char d={'a','b','c',}
// {
//     char d[9] = "hello";
//     const char *s = " world welcome to wonderland";
//     printf("strkcat result is :%zd\n\n",ft_strlcat(d,s,10));
//     size_t i = 0 ;
//     while (i < sizeof(d) && d[i] != '\0')
//     {
//         printf("%c",d[i]);
//         i++;
//     }
//     printf("\n");
//     return(0);
// }

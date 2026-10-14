/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:43:37 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/14 12:20:54 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static void	helper(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	if (s < d)
	{
		while (i < n)
		{
			d[n - 1 - i] = s[n - 1 - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	helper(d, s, n);
	return (dest);
}

// int main()
// {
//     char arr[5] = {'a','b','c','d','e'};

//     ft_memmove(&arr[0],&arr[2],3);
//     int i = 0;
//     while (i < 5)
//     {
// 		printf("%c",arr[i]);
// 		i++;
//     }
//     printf("\n");
//     return(0);
// }
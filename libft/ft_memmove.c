/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:43:37 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/08 21:26:26 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
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
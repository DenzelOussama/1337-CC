/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:32:40 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/17 15:55:18 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)s;
	while (n)
	{
		if(*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
// int main(void)
// {

// 	printf("this is ft_memchr: %p\n",ft_memchr("",'l',8));
// 	printf("this is memchr:    %p\n",memchr("",'l',8));
	
// 	return(0);
// }
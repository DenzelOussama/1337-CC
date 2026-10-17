/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:00:02 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/17 16:15:45 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		
		ptr1++;
		ptr2++;
		n--;
	}
	
	return (0);
}
int main(void)
{

	printf("this is ft_memcmp: %d\n",ft_memcmp("wasup yall ggs","wasup yacll ggs",40));
	printf("this is memcmp:    %d\n",memcmp("wasup yall ggs","wasup yacll ggs",40));
	
	return(0);
}
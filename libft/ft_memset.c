/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:04:35 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/01 18:36:43 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while (i<n)
	{
		p[i] = (unsigned char)c;
		i++;
	}	
	return (s);
}
int main()
{
	int x = 0;
	int i = 0;
	int y = -990;
	
	// ft_memset(&x, 57, 1);
	// ft_memset(((unsigned char *)&x)+1, 5, 1);
	while (i >= 0)
	{
		ft_memset(((unsigned char *)&x)+i, *(((unsigned char *)&y)+i), 1);
		i--;
	}
     
	printf("%d\n",x);
	return 0;
}
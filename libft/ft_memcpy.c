/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:20:31 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/13 13:18:25 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;

	if(!dest && !src)
	{
		return(NULL);
	}
	i = 0;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

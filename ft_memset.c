/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:04:35 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/13 12:01:06 by olgarh           ###   ########.fr       */
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

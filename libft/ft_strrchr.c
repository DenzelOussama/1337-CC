/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:02:24 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/18 11:43:45 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *ptr;

	ptr = (char *)s;
	i = ft_strlen(s);
	if(c == '\0')
		return(&ptr[i]);
	while(i != 0)
	{
		if(ptr[i] == c)
			return(&ptr[i]);
		i--;
	}
	return(NULL);
}

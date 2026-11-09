/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:27:17 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/09 14:52:06 by olgarh           ###   ########.fr       */
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

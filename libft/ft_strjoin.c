/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:29:40 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/08 22:31:41 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	count;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	count = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(sizeof(char) * count);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, count);
	ft_strlcat(p, s2, count);
	return (p);
}

// int	main(void)
// {
// 	char *r;
// 	printf("%p\n", r = ft_strjoin(NULL, " how tf we doing man hehe"));
// 	// char *str;
// 	// str = s;
// 	// printf("%s\n",ft_strjoin(str,NULL));
// 	// if (!str)
// 	// 	return (0);
// 	return (0);
// }
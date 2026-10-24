/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 23:23:36 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/24 11:03:16 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	i = 0;
	p = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// static char	shift_by_one(unsigned int i, char c)
// {
// 	(void)i; // We don't use the index for this specific test
// 	if (c >= 32 && c <= 126)
// 		return (c + 1);
// 	return (c);
// }

// int	main(void)
// {
// 	char *result;

// 	result = ft_strmapi("hello", shift_by_one);
// 	printf("Result: [%s] | Expected: [ifmmp]\n", result);
// 	free(result);

// 	return (0);
// }
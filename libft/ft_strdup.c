/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:27:06 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/18 13:41:13 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char *p;
	
	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main(void)
// {
//     char *original = "1337 Rabat";
//     char *duplicate;

//     duplicate = ft_strdup(original);
//     if (!duplicate)
//     {
//         printf("Malloc failed!\n");
//         return (1);
//     }
    
//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);

//     // If you delete this next line, Valgrind will scream at you for a memory leak!
//     free(duplicate); 

//     return (0);
// }
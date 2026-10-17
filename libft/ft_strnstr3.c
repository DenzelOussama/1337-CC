/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:23:01 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/17 19:30:08 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while(big[i] != '\0' && i < len)
	{
		j = 0;
		if ((big[j] == little[0]))
		{
			while( i + j < len && big[i+j] == little[j] )
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
    printf("%s\n", ft_strnstr("Foo Bar Baz", "Bar", 15)); //expected output: Bar Baz
    // 2. Length limit stops EXACTLY at the end of the needle
    printf("%s\n", ft_strnstr("Foo Bar Baz", "Bar", 7)); //expected output: Bar Baz
    // 3. Length limit cuts off the needle (stops at "Ba")//expected output: (null)
	if((ft_strnstr("Foo Bar Baz", "Bar", 6)) == NULL)
		printf("NULL\n");
	else
		printf("false\n");
		
    // 4. Empty needle (must return the big string)
    printf("%s\n", ft_strnstr("Hello World", "", 5)); //expected output: Hello World
    // 5. Needle not found at all//expected output: (null)
	if((ft_strnstr("Hello World", "42", 11)) == NULL)
		printf("NULL\n");
    // 6. Length is 0//expected output: (null)
	if((ft_strnstr("Hello World", "Hello", 0)) == NULL)
		printf("NULL\n");
    // 7. Needle is bigger than the big string//expected output: (null)
	if((ft_strnstr("Hi", "Hello", 5)) == NULL)
		printf("NULL\n");

    return (0);
}
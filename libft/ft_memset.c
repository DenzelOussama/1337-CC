/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:04:35 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/08 20:26:36 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main()
// {
// 	char s[4];
// 	ft_memset(&s[0],0,1);
// 	ft_memset(&s[1],0,1);
// 	ft_memset(&s[2],5,1);
// 	ft_memset(&s[3],57,1);
// 	printf("%d",*(int *)s);
// 	// int i =0;
// 	// while(i<2)
// 	// {
// 	// 	printf("%d",s[i++]);
// 	// }
// }
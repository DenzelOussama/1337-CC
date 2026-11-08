/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:03:02 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/08 22:38:38 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *s1="ABC";
// 	char *s2="";
// 	if(s2[0] ==)
// 	printf("%c\n",s2[0]);
// 	printf("this is ft_strncmp %d\n",ft_strncmp(s1,s2,20));
// 	printf("this is original strncmp %d\n",strncmp(s1,s2,20));
// 	return(0);
// }

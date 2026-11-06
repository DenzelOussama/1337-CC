/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:41:37 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/06 10:46:14 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// nmeb how many elements, sizeof() each elem
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	count;

	if (nmemb != 0 && (size > ((size_t)-1) / nmemb))
		return (NULL);
	count = size * nmemb;
	p = malloc(count);
	if (!p)
		return (NULL);
	ft_bzero(p, count);
	return (p);
}
int main(void)
{
	int i =0;
	// unsigned char *b;
	// int *p;
	// p = ft_calloc(15,1);
	// b = (unsigned char *)p;
	struct players{
		char *f_name;
		char *l_name;
		int id;
		int age ;
	};
	unsigned char *p = ft_calloc(0,sizeof(struct players));
	int size = sizeof(struct players);
	// printf("%d",size);
	while(i<4*size)
	{
		printf("%d:%d\n",i , p[i]);
		i++;
	}
	free(p);
	return(0);
}
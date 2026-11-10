/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 23:28:41 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/10 14:59:15 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;
	void	*content;

	new_head = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			if (del)
				del(content);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
void del(void *content)
{
	printf("content called in del\n");
	// content = NULL;
}
void *f(void *s)
{
	*(char *)s = *(char *)s - 32;
	return(s);
}
int main(void)
{

	t_list *n1;
	t_list *n2;
	t_list *n3;
	char s1[]="a";
	char s2[]="b";
	char s3[]="c";
	n1 = ft_lstnew(s1);
	n2 = ft_lstnew(ft_strdup(s2));
	n3 = ft_lstnew(ft_strdup(s3));

	n1->next = n2;
	n2->next = n3;

	
	t_list *newnode = ft_lstmap(n1,f,del);
	t_list *s = newnode;
	while(s)
	{
		printf("%s\n",(char *)s->content);
		s = s->next;
	}
	// ft_lstdelone(first_node,del);
	// free(second_node->content);
	// 
	ft_lstclear(&n1,del);
	ft_lstclear(&newnode,del);

	return(0);
}

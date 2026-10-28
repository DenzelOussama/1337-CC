/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 23:28:41 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/28 11:49:11 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_head;
	t_list *temp;
	t_list *new_node;

	new_head = NULL;
	if (!lst || !f || !del)
		return (NULL);

	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
			ft_lstclear(&new_head, del);
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
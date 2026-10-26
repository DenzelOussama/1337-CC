/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:50:12 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/26 11:48:03 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *first_node;
// 	first_node = ft_lstnew("this is the first node");
// 	t_list *head = first_node;
// 	t_list *new = ft_lstnew("this is the new node");
// 	printf("old head %p\n", head);
// 	printf("first node %p\n", head->next);

// 	ft_lstadd_front(&head, new);
// 	printf("new head %p\n", head);
// 	printf("first node %p\n", head->next);
// 	return (0);
// }
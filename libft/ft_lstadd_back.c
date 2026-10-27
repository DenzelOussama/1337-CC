/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:46:24 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/27 11:42:14 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)//check if adresses given are not NULL
		return;
	if (*lst == NULL)//*lst checks if the list empty, aka head points at NULL
	{
		*lst = new;// then we make the new list our first node
		return;
	}
	last = ft_lstlast(*lst);//find last node
	last->next = new;
	printf("%s\n", (char *)new->content);
}
int	main(void)
{
	t_list *head ;
	t_list *firstnode = NULL;
	t_list *secondnode = ft_lstnew("this is the second node");
	t_list *thirdnode = ft_lstnew("this is the third node");
	t_list *fourthnode = ft_lstnew("this is the fourth node");

	head = secondnode;
	// firstnode->next = secondnode;
	secondnode->next = thirdnode;
	thirdnode->next = fourthnode;
	// printf("%s\n", (char *)firstnode->content);

	ft_lstadd_back(&head, firstnode);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:20:29 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/26 14:53:59 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst || !new)
		
		return ;
	while (lst)
	{
		printf("%s", (char *)*lst->content);
		*lst = *lst->next;
	}
	new->next = NULL;
	*lst->next = new;
	printf("%s", (char *)*lst->content);
}
int	main(void)
{
	t_list *head = NULL;
	t_list *firstnode = ft_lstnew("this is the first node");
	head = firstnode;
	t_list *secondnode = ft_lstnew("this is the second node");
	t_list *thirdnode = ft_lstnew("this is the third node");
	t_list *fourthnode = ft_lstnew("this is the fourth node");

	firstnode->next = secondnode;
	secondnode->next = thirdnode;
	// thirdnode->next = fourthnode;

	ft_lstadd_back(&head, fourthnode);
	return (0);
}
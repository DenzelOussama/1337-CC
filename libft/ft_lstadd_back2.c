/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:46:24 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/26 22:04:13 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	new = last;
	printf("%s\n",(char *)new->content);
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
	printf("%s\n",(char *)fourthnode->content);

	ft_lstadd_back(&head, fourthnode);
	return (0);
}
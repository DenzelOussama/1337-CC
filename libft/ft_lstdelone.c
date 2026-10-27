/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:49:10 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/27 12:48:56 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*del(void *content)
{
	free(content);
	return(content);
}
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	if(!(lst->content))
		printf("the content have been freed");
	free(lst);
}

int	main(void)
{
	t_list *head ;
	t_list *firstnode = ft_lstnew("this is the first node");
	t_list *secondnode = ft_lstnew("this is the second node");
	t_list *thirdnode = ft_lstnew("this is the third node");
	t_list *fourthnode = ft_lstnew("this is the fourth node");

	head = firstnode;
	firstnode->next = secondnode;
	secondnode->next = thirdnode;
	thirdnode->next = fourthnode;
	printf("%s\n", (char *)firstnode->content);

	ft_lstdelone(firstnode, del(firstnode->content));
	return (0);
}
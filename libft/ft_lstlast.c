/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:13:36 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/26 13:34:53 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *firstnode = ft_lstnew("this is the first node");
// 	head = firstnode;
// 	t_list *secondnode = ft_lstnew("this is the second node");
// 	t_list *thirdnode = ft_lstnew("this is the third node");
// 	t_list *fourthnode = ft_lstnew("this is the fourth node");

// 	firstnode->next = secondnode;
// 	secondnode->next = thirdnode;
// 	thirdnode->next = fourthnode;
// 	printf("forthnode aka last node adress is: %p\n", fourthnode);
// 	printf("the function returns: %p\n", ft_lstlast(head));
//	printf("%d %p\n",++i,lst);
// 	return (0);
// }
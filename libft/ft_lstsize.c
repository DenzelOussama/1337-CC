/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:35:11 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/26 13:12:57 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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
/*printf("%s\n", (char *)lst->content);*/

// 	printf("we have : %d nodes\n", ft_lstsize(head));
// 	return (0);
// }
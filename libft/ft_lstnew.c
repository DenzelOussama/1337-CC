/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:16:27 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/26 10:05:39 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// typedef struct student
// {
// 	char	name[20];
// 	int		age;
// 	struct	student* next;
// };
// int	main(void)
// {
// 	t_list s1 = {"denzel",NULL};
// 	printf("content:%s, next:%d",s1.content,s1.next);
// 	return (0);
// }
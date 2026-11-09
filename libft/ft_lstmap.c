/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 23:28:41 by olgarh            #+#    #+#             */
/*   Updated: 2026/11/09 16:43:20 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
#include <stdio.h>
void *f_map(void *content)
{
    char *str = (char *)content;
    // Let's append "!" to every string in the list
    return (ft_strjoin(str, "!"));
}

// 2. The delete function: frees the content when nodes are cleared
void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *head = NULL;
    t_list *mapped_list = NULL;

   
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Hello")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("1337")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Rabat")));

   
    mapped_list = ft_lstmap(head, f_map, del_content);

    // Print the new mapped list
    t_list *curr = mapped_list;
    int i = 0;
    while (curr)
    {
        printf("mapped_list[%d] = %s\n", i, (char *)curr->content);
        curr = curr->next;
        i++;
    }

    
    ft_lstclear(&head, del_content);
    ft_lstclear(&mapped_list, del_content);

    return (0);
}
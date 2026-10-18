/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:41:37 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/18 15:04:49 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;
    size_t	count;
    if (nmemb != 0 && (size > ((size_t) -1) / nmemb))
        return (NULL);
    count = size * nmemb;
		p = malloc(count);
    if (!p)
        return (NULL);
    ft_bzero(p,count);
    return (p);
}

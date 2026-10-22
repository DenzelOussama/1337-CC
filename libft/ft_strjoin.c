/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:29:40 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/21 18:23:08 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


char *ft_strjoin(char const *s1, char const *s2)
{
    char    *p;
    size_t    count;
    size_t    i;
    size_t    j;
    if(!s1 || !s2)
        return (strdup(""));
    
    count = strlen(s1) +  strlen(s2) + 1;
    p = (char *)malloc(sizeof(char) * count);
    i = 0;
    while (s1[i] != '\0')
    {
        p[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        p[i] = s2[j];
        i++;
        j++;
    }
    p[i]='\0';
    return(p);
}
int main(void)
{
    char    *r;
    printf("%s\n",r= ft_strjoin("hey wasup dude"," how tf we doing man hehe"));
    free(r);
    return(0);
}
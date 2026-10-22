/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:59:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/21 19:18:29 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static  int ft_count_words(char *str,char c)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (str[i] != '\0' )
    {
        if (str[i] == c)
        {
            i++;
            j++;
            continue;
        }
        i++;
    }
    return(j + 1);
}
static  char    *ft_store_word(char *)
{

    
}
static  char    *ft_allocate_word(const char *str, char c)
{
    char *p;
    size_t  i;

    i = 0;
    while (str[i] != c && str[i] != '\0' )
        i++;
    p = malloc(sizeof(char) * (i + 1));
    if (!p)
        return(NULL);
    return (p);
}
char **ft_split(char const *s, char c)
{
    char *t;
    size_t  i;
    size_t  words;

    words = ft_count_words()
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            i++;
            continue;
        }
        t=(ft_allocate_word(&s[i],c));
        i++;
    }
        
}
int main(void)
{
    char **res1 = ft_split("hello-world-1337", '-');
    char **res2 = ft_split("---hello---world---", '-');
    char **res3 = ft_split("-------", '-');
    char **res4 = ft_split("", '-');

    printf("Test 1 (Normal): [%s] [%s] [%s]\n", res1[0], res1[1], res1[2]);
    printf("Test 2 (Multiple delimiters): [%s] [%s]\n", res2[0], res2[1]);
    printf("Test 3 (Only delimiters): %p\n", res3[0]);
    printf("Test 4 (Empty string): %p\n", res4[0]);

    return (0);
}
// char **strs = {hello,scnuch,vsv};
// char c = ',';
// output = helloscnuchvsv;
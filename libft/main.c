/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:46:03 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/28 11:59:11 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct s_list1
{
	int			*content;
	char		c;
	int			*next;
}					t_list1;


int main(void)
{
	printf("%i",sizeof(t_list1));
	return(0);
}	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:46:03 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/13 11:03:05 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int main(void)
{
	int alpha = ft_isalpha('1');
	int digit = ft_isdigit(',');
	int print = ft_isprint('G');
	int len = ft_strlen("hello world");
	int alnum = ft_isalnum('-');
	int asci = ft_isascii('z');

	printf("%d\n ",alpha);
	printf("%d\n ",digit);
	printf("%d\n ",print);
	printf("%d\n ",len);
	printf("%d\n ",alpha);
	printf("%d\n ",alnum);
	printf("%d\n ",asci);
	return(0);
}	

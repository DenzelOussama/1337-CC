/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:45:11 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/23 23:03:09 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	ft_count_numbers(long long nb)
{
	size_t	count;

	count = 0;
	if (nb <= 0)
		count = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static void	ft_fill_chars(char *p, long long nb, int len)
{
	int	start;

	start = 0;
	if (nb < 0)
	{
		nb = -nb;
		p[0] = '-';
		start = 1;
	}
	p[len] = '\0';
	len--;
	while (len >= start)
	{
		p[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	long long	nb;
	char		*p;

	nb = (long long)n;
	len = ft_count_numbers(nb);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	ft_fill_chars(p, nb, len);
	return (p);
}

// int	main(void)
// {
// 	char *s;

// 	s = ft_itoa(0);
// 	printf("Zero:    [%s] | expected: [0]\n", s);
// 	free(s);
// 	s = ft_itoa(42);
// 	printf("Pos:     [%s] | expected: [42]\n", s);
// 	free(s);
// 	s = ft_itoa(-42);
// 	printf("Neg:     [%s] | expected: [-42]\n", s);
// 	free(s);
// 	s = ft_itoa(INT_MAX);
// 	printf("INT_MAX: [%s] | expected: [2147483647]\n", s);
// 	free(s);
// 	s = ft_itoa(INT_MIN);
// 	printf("INT_MIN: [%s] | expected: [-2147483648]\n", s);
// 	free(s);

// 	return (0);
// }
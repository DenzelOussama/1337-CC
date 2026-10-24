/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:18:42 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/24 12:39:50 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char        mod;
    long long   nb;

    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
    }
    mod = (nb % 10) + '0';
    write(fd, &mod, 1);
}

int	main(void)
{
	ft_putnbr_fd(-7863874, 1);
	printf("\n");
	return (0);
}
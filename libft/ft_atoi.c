/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:38:34 by olgarh            #+#    #+#             */
/*   Updated: 2026/10/18 12:26:25 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int	sign;
	long long	result;
	
	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <=13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * sign));
}
// int main(void)
// {
//     // 1. Normal numbers
//     printf("Normal:      ft_atoi: %d | original: %d\n", ft_atoi("42"), atoi("42"));
//     printf("Negative:    ft_atoi: %d | original: %d\n", ft_atoi("-42"), atoi("-42"));
    
//     // 2. The Whitespace Gauntlet (all 6 valid ASCII spaces)
//     printf("Whitespace:  ft_atoi: %d | original: %d\n", ft_atoi(" \t\n\v\f\r 1337"), atoi(" \t\n\v\f\r 1337"));
    
//     // 3. The Sign Trap (only one sign allowed, directly attached)
//     printf("Plus sign:   ft_atoi: %d | original: %d\n", ft_atoi("+42"), atoi("+42"));
//     printf("Multi sign:  ft_atoi: %d | original: %d\n", ft_atoi("+-42"), atoi("+-42"));
//     printf("Double minus:ft_atoi: %d | original: %d\n", ft_atoi("--42"), atoi("--42"));
//     printf("Space split: ft_atoi: %d | original: %d\n", ft_atoi("  - 42"), atoi("  - 42"));
    
//     // 4. The Letter Wall (stop immediately at non-digits)
//     printf("End letters: ft_atoi: %d | original: %d\n", ft_atoi("42abc"), atoi("42abc"));
//     printf("Start letter:ft_atoi: %d | original: %d\n", ft_atoi("abc42"), atoi("abc42"));
//     printf("Mid letters: ft_atoi: %d | original: %d\n", ft_atoi("42a36"), atoi("42a36"));
    
//     // 5. INT Limits
//     printf("INT_MAX:     ft_atoi: %d | original: %d\n", ft_atoi("21474836473235252"), atoi("21474836473235252"));
//     printf("INT_MIN:     ft_atoi: %d | original: %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
    
//     return (0);
// }
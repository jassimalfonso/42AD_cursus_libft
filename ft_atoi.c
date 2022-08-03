/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:30:52 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/04 02:04:35 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr <= 9 && *nptr >= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * sign));
}

// #include <string.h>

// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
// 	printf("ft_atoi: %d\n\n", atoi("-2147483648"));

// 	printf("ft_atoi: %d\n", ft_atoi("0"));
// 	printf("ft_atoi: %d\n\n", atoi("0"));

// 	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
// 	printf("ft_atoi: %d\n\n", atoi("2147483647"));

// 	printf("ft_atoi: %d\n", ft_atoi("A"));
// 	printf("ft_atoi: %d\n\n", atoi("A"));
// 	return (0);
// }
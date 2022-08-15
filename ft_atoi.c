/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:30:52 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/15 18:28:15 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_long(unsigned long num, int sign)
{
	if (num >= 9223372036854775807 && sign == 1)
		return (-1);
	else if (num >= -9223372036854775808UL && sign == -1)
		return (0);
	else
		return (42);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	long	sign;
	size_t	i;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (num_long (result, sign) == 0)
		return (0);
	else if (num_long (result, sign) == -1)
		return (-1);
	return ((int)(result * sign));
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
// 	printf("ft_atoi: %d\n\n", atoi("-2147483648"));
//
// 	printf("ft_atoi: %d\n", ft_atoi("0"));
// 	printf("ft_atoi: %d\n\n", atoi("0"));
//
// 	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
// 	printf("ft_atoi: %d\n\n", atoi("2147483647"));
//
// 	printf("ft_atoi: %d\n", ft_atoi("-9223372036854775808"));
// 	printf("ft_atoi: %d\n\n", atoi("-9223372036854775808"));
//
// 	printf("ft_atoi: %d\n", ft_atoi("9223372036854775807"));
// 	printf("ft_atoi: %d\n\n", atoi("9223372036854775807"));
//
// 	printf("ft_atoi: %d\n", ft_atoi("A"));
// 	printf("ft_atoi: %d\n\n", atoi("A"));
// 	return (0);
// }
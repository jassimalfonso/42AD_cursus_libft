/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:24:33 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:04 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	find_len(int num)
{
	size_t	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*new_s;

	len = find_len(n);
	num = n;
	new_s = (char *)malloc((sizeof(char) * len) + 1);
	if (!new_s)
		return (FT_NULL);
	if (num < 0)
	{
		new_s[0] = '-';
		num *= -1;
	}
	else if (num == 0)
		new_s[0] = '0';
	new_s[len--] = '\0';
	while (num)
	{
		new_s[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (new_s);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(+2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }
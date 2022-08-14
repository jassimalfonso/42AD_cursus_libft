/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:09:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/14 16:37:24 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	int num;
// 	int num_fd;
//
// 	num = -11;
// 	num_fd = 1;
// 	ft_putnbr_fd(num, num_fd);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:46:51 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/14 15:12:44 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char c;
// 	c = 'a';
//
// 	ft_putchar_fd(c, 1);
// 	write(1, &c, 1);
// 	ft_putchar_fd(c, -1);
// 	write(-1, &c, 1);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:58:14 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/14 15:15:02 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char *c;
// 	c = "Hello there, this is a string.";
//
// 	ft_putendl_fd(c, 1);
// 	return (0);
// }
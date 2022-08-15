/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:49:10 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/15 16:39:38 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char *c;
// 	c = "Hello there, this is a string.\n";
//
// 	ft_putstr_fd(c, 1);
// 	return (0);
// }
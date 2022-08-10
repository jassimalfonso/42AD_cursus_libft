/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:31:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 13:09:45 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char str[50] = "This is string.h library function";
// 	printf("%s\n", str);
// 	ft_bzero(str, 0);
// 	printf("%s\n", str);
// 	return (0);
// }
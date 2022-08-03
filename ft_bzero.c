/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:31:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/04 02:19:50 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*((char *)s + n) = 0;
}

// #include <string.h>

// int main(void)
// {
// 	char str[50];
// 	strcpy(str, "This is string.h library function");
// 	puts(str);
// 	ft_bzero(str, strlen(str));
// 	puts(str);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:19:52 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 15:49:33 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	while (n--)
		*(unsigned char *)dest++ = *(unsigned const char *)src++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[30] = "Hello there";
// 	char	s2[30] = "Hi there";

// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n\n", s2);
// 	printf("ft_memcpy\n");
// 	ft_memcpy(s2, s1, 5);
// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n\n", s2);
// 	printf("memcpy\n");
// 	memcpy(s2, s1, 5);
// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n\n", s2);
// 	return (0);
// }
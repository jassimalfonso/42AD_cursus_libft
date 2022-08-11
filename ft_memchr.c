/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:10:36 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/11 00:15:53 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;
	unsigned char	new_c;

	new_s = (unsigned char *)s;
	new_c = (unsigned char)c;
	i = 0;
	while (i != n)
	{
		if (new_s[i] == new_c)
			return (new_s + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char src[30] = "Hello there friends! HI!";
// 	printf("ft_memchr:\n");
// 	printf("%s\n", (char *)ft_memchr(src, 's', 15));
// 	printf("%s\n\n", (char *)ft_memchr(src, 's', 20));
// 	printf("memchr:\n");
// 	printf("%s\n", (char *)memchr(src, 's', 15));
// 	printf("%s\n", (char *)memchr(src, 's', 20));
// 	return (0);
// }
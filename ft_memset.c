/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:31:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/14 19:08:24 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = (unsigned char)c;
	return (s);
}

// #include <string.h>

// int	main(void)
// {
// 	char str[40] = "This is a string. Hello there.";
// 	puts(str);
// 	printf("ft_memset: ");
// 	ft_memset(str, '*', 5);
// 	puts(str);
// 	printf("memset: ");
// 	memset(str, '&', 5);
// 	puts(str);	
// }
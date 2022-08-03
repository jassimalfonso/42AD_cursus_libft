/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:31:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/04 02:30:29 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*((char *)s + n) = (char) c;
	return (s);
}

// #include <string.h>

// int	main(void)
// {
// 	char str[30] = "This is a string. Hello there.";

// 	puts(str);
// 	ft_memset(str, '*', 5);
// 	puts(str);
// 	memset(str, '&', 5);
// 	puts(str);
// 	return(0);
// }
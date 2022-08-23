/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:54:13 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:22 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!c)
		return ((char *)s);
	return (FT_NULL);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char str[] = "hello there";
//
// 	printf("%s\n", ft_strchr(str, 't'));
// 	printf("%s\n", strchr(str, 't'));
// 	printf("%s\n", ft_strchr(str, 'Q'));
// 	printf("%s\n", strchr(str, 'Q'));
// 	return (0);
// }
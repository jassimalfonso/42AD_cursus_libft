/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:54:13 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/05 13:49:31 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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
	return (NULL);
}

// int	main(void)
// {
// 	// char *str;
// 	// str = "Hello there";
// 	char str[] = "hello there";
// 	printf("%s\n", ft_strchr(str, 't' + 256));
// 	printf("%s\n", strchr(str, 't' + 256));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:43:28 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/10 15:22:29 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t n)
{
	size_t	len_d;
	size_t	len_s;
	size_t	n_limit;
	char	*ptr;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	ptr = dst;
	if (len_d >= n)
		return (len_s + n);
	n_limit = n - len_d - 1;
	while (*ptr)
		ptr++;
	while (*src && n_limit)
	{
		*ptr++ = *src++;
		n_limit--;
	}
	*ptr = '\0';
	return (len_d + len_s);
}

// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
//     char s1[10] = "hello";
//     char s2[10] = "hello";
//
//     printf("%zu\n", ft_strlcat(s1, "cat", 4));
// 	printf("%zu\n", strlcat(s2, "cat", 4));
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:37:16 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/10 02:50:30 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (ft_strlen (src));
	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i] && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen (src));
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char src[30], dest[30];
//
// 	strcpy(src, "This is source");
// 	strcpy(dest, "This is destination");
//
// 	ft_strlcpy(dest, src, 14);
// 	printf("%s\n%s", src, dest);
// 	return (0);
// }
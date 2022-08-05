/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:37:16 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/05 13:44:23 by jalfonso         ###   ########.fr       */
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
	while (src[i] != '\0' && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen (src));
}

// #include <stdio.h>
// #include <string.h>

// void test(int size)
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
//     int r;

//     r = strlcpy(buffer,string,size);
//     printf("Copied %d characters from '%s' into '%s',
//				length %d\n", size, string, buffer, r);
// }

// void test2(int size)
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
//     int r;

//     r = ft_strlcpy(buffer,string,size);
//     printf("Copied %d characters from '%s' into '%s',
//				length %d\n", size, string, buffer, r);
// }

// int main()
// {
//     test(19);
//     test(10);
//     test(1);
//     test(0);
//     test2(19);
//     test2(10);
//     test2(1);
//     test2(0);

//     return(0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:12:51 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:21 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*new_d;
	unsigned const char	*new_s;
	unsigned char		*last_d;
	unsigned const char	*last_s;

	new_d = (unsigned char *)dest;
	new_s = (unsigned const char *)src;
	if (!dest && !src)
		return (FT_NULL);
	else if (new_d < new_s)
		while (n--)
			*new_d++ = *new_s++;
	else
	{
		last_d = new_d + (n - 1);
		last_s = new_s + (n - 1);
		while (n--)
			*last_d-- = *last_s--;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	this_string[30] = "ABCDEFGHIJK";
// 	ft_memmove (this_string + 4, this_string, 10);
// 	printf("%s\n", this_string);
// 	return (0);
// }
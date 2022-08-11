/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:11:19 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/11 00:42:14 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*new_s1;
	unsigned const char	*new_s2;

	new_s1 = (unsigned const char *)s1;
	new_s2 = (unsigned const char *)s2;
	if (n == 0)
		return ('\0');
	while (n)
	{
		if (*new_s1 != *new_s2)
			return (*new_s1 - *new_s2);
		new_s1++;
		new_s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char *s1;
// 	char *s2;
// 	int ret;
//
// 	s1 = "abcdefgh";
// 	s2 = "abcdwxyz";
// 	printf("%d\n", ft_memcmp(s1, s2, 5));
// 	printf("%d\n", memcmp(s1, s2, 5));
// 	return (0);
// }
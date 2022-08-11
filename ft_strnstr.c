/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:02:43 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/11 16:54:41 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char 	*s1;
// 	char 	*s2;
// 	size_t	n;
//
// 	s1 = "Hello there friend, this is string.";
// 	s2 = "friend";
// 	n = 25;
// 	printf("%s\n", ft_strnstr(s1, s2, n));
// 	return (0);
// }
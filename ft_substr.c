/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:00:49 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/12 00:57:24 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_s = (char *)malloc(len * sizeof(*s) + 1);
	if (!sub_s)
		return (NULL);
	ft_memmove (sub_s, s + start, len);
	sub_s[len] = '\0';
	return (sub_s);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
//
// 	s1 = "Hello there, I am a string.";
// 	s2 = ft_substr(s1, 5, 29);
//
// 	printf("%s\n", s2);
// 	return (0);
// }
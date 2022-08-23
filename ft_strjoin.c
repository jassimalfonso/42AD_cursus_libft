/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:35:58 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:24 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (FT_NULL);
	i = 0;
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_s)
		return (FT_NULL);
	j = 0;
	while (s1[j])
		new_s[i++] = s1[j++];
	j = 0;
	while (s2[j])
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	char *s3;
//
// 	s1 = "Hello this is string 1, ";
// 	s2 = "and this is string 2.";
// 	s3 = ft_strjoin(s1, s2);
//
// 	printf ("%s\n", s3);
// 	return (0);
// }
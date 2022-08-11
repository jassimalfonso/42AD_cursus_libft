/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:29:08 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/11 00:01:59 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
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
// 	s1 = "zyxbcdefgh";
// 	s2 = "abcdwxyz";
// 	printf("%d\n", ft_strncmp(s1, s2, 1));
// 	printf("%d\n", strncmp(s1, s2, 1));
// 	return (0);
// }
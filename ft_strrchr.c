/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:20:10 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/10 23:40:07 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				pos;
	char			*new_s;
	unsigned char	new_c;

	new_s = (char *)s;
	new_c = (unsigned char)c;
	pos = ft_strlen(s);
	if (!c)
		return (new_s + pos);
	while (pos != -1)
	{
		if (new_s[pos] == new_c)
			return (new_s + pos);
		pos--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char *str;
// 	str = "Hello.com";
//	
// 	printf("ft_strrchr: %s\n", ft_strrchr(str, 'l'));
// 	printf("strrchr: %s\n", strrchr(str, 'l'));
// 	return (0);
// }
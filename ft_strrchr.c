/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:20:10 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/03 19:43:16 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	pos;
	
	pos = ft_strlen(s);
	if (!c)
		// return ((char *)s);
		return ((char *)s + pos);
		
	while (pos != -1)
	{
		if (s[pos] == (char)c)
			return ((char *)&s[pos]);
		pos--;
	}
	return (NULL);
}

int main(void)
{
	char *str;
	str = "Hello.com";
	
	printf("ft_strrchr: %s\n", ft_strrchr(str, '.'));
	printf("strrchr: %s\n", strrchr(str, '.'));
	return (0);
}
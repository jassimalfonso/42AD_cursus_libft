/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:00:49 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/03 14:10:34 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_s || !*(s + i))
		return (NULL);
	while (*(s + i))
	{
		if (i >= start && j < len)
		{
			*(sub_s + j) = *(s + i);
			j++;
		}
		i++;
	}
	*(sub_s + j) = '\0';
	return (sub_s);
}

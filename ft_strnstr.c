/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:02:43 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/03 14:10:34 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (*(s1 + i) && i < n)
	{
		j = 0;
		while (*(s1 + i + j) == *(s2 + j) && (i + j) < n)
		{
			if (*(s2 + j + 1) == '\0')
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

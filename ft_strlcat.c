/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:43:28 by jalfonso          #+#    #+#             */
/*   Updated: 2022/07/07 18:12:09 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = dst_size;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
		if (i == n - 1)
			break ;
	}
	*(dst + i) = '\0';
	return (dst_size + src_size);
}

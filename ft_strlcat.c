/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:43:28 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/05 20:43:10 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len	= ft_strlen(src);
	i = 0;
	j = dst_len;
	if (dst_len >= n)
		dst_len = n;
	if (dst_len < (n - 1) && n > 0)
	{
		while ((dst_len + i) < (n - 1) && src[i])
			dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
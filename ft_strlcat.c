/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:43:28 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/10 10:51:03 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	n;
	        char	*p;

	p = dst;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	n = dstsize - dst_len - 1;
	while (*p)
		p++;
	while (*src != '\0' && n)
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';
	return (dst_len + src_len);
}

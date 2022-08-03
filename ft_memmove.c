/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:12:51 by jalfonso          #+#    #+#             */
/*   Updated: 2022/07/07 02:40:16 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*store;

	store = (unsigned char *)malloc(sizeof(char) * n);
	while (n--)
	{
		*(store + n) = *((unsigned char *)src + n);
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	free(store);
	return (dest);
}

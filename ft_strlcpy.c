/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:37:16 by jalfonso          #+#    #+#             */
/*   Updated: 2022/07/07 15:39:35 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	while (*(dst + n) != '\0')
	{
		*(dst + n) = *(src + n);
		n++;
	}
	*(dst + n) = '\0';
	return (ft_strlen(src));
}

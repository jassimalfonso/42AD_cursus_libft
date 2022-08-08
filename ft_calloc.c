/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:02:08 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/08 11:10:01 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	num;

	num = count * size;
	ptr = (void *)malloc(num);
	if (!ptr || count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ft_bzero(ptr,	num);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:02:08 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:52 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == SIZE_MAX && count > 1)
		return (FT_NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (FT_NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	size_t	n;
//
// 	s1 = "Hello there, this is a string.";
// 	n = strlen(s1);
// 	s2 = (char *)ft_calloc(n, sizeof(*s1));
// 	printf("%s\n", strncpy(s2, s1, 10));
// 	return (0);
// }
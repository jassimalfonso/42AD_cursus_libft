/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:38:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 11:42:29 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	*i;
//
// 	i = "This is a string.";
// 	printf("ft_strlen: %zu\n", ft_strlen(i));
// 	printf("strlen: %zu\n", strlen(i));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:57:50 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 10:19:59 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("A: %d | a: %d\n", ft_isalpha('A'), ft_isalpha('a'));
// 	printf("A: %d | a: %d\n", isalpha('A'), isalpha('a'));
// 	return (0);
// }
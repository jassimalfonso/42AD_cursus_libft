/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:11:25 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 10:20:41 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
//
// int	main(void)
// {
// 	printf("A: %d | 5: %d\n", ft_isdigit('A'), ft_isdigit('5'));
// 	printf("A: %d | 5: %d\n", isdigit('A'), isdigit('5'));
// 	return (0);
// }
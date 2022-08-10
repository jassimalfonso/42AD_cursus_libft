/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:23:06 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 10:20:26 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
//
// int	main(void)
// {
// 	printf("A: %d | !: %d\n", ft_isascii('A'), ft_isascii('!'));
// 	printf("A: %d | !: %d\n", isascii('A'), isascii('!'));
// 	return (0);
// }
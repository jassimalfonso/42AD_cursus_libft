/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:07:52 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/10 15:48:40 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
//
// int	main(void)
// {
// 	printf("'a' ft_toupper: %c\n", ft_toupper('a'));
// 	printf("'a' toupper: %c\n", toupper('a'));
// 	return (0);
// }
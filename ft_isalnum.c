/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:14:47 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/09 10:20:11 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
//
// int main(void)
// {
// 	printf("A: %d | 5: %d\n", ft_isalnum('A'), ft_isalnum('5'));
// 	printf("A: %d | 5: %d\n", isalnum('A'), isalnum('5'));
// 	printf("a: %d | !: %d\n", ft_isalnum('a'), ft_isalnum('!'));
// 	printf("a: %d | !: %d\n", isalnum('a'), isalnum('!'));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:29:21 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/15 16:57:12 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
//
// void func_char(unsigned int i, char *s)
// {
// 	size_t n;
// 	n = i;
// 	n = 0;
// 	write(1, &s[n], 1);
// }
//
// int main(void)
// {
// 	char *str = "hello";
//
// 	ft_striteri(str, &func_char);
// 	return (0);
// }
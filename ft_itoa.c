/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:24:33 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/01 14:54:42 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	the_absolute(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

int	num_size(int num)
{
	int	count;

	count = 0;
	if (num == 0 || num < 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

int	get_right_num(int num)
{
	return (num % 10);
}

char	*ft_itoa(int n)
{
	int		num_len;
	char	*new_s;
	int		i;
	int		num;

	num = n;
	num_len = num_size(n);
	new_s = (char *)malloc(sizeof(char) * num_len + 1);
	if (n == 0)
		new_s[0] = 0;
	if (!new_s)
		return (NULL);
	i = (num_len - 1);
	new_s[i + 1] = '\0';
	while (i >= 0)
	{
		new_s[i] = get_right_num(the_absolute(n)) + '0';
		n /= 10;
		i--;
	}
	if (num < 0)
		new_s[0] = '-';
	return (new_s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:30:52 by jalfonso          #+#    #+#             */
/*   Updated: 2022/07/15 20:45:19 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	result;
	long	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (*(nptr + i) == 32 || (*(nptr + i) <= 9 && *(nptr + i) >= 13))
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sign *= -1;
		i++;
	}
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		result = result * 10 + (*(nptr + i) - '0');
		i++;
	}
	return ((int)(result * sign));
}

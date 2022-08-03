/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:35:58 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/03 14:10:34 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	t_slen;
	size_t	i;
	size_t	j;

	i = 0;
	t_slen = ft_strlen(s1) + ft_strlen(s2);
	new_s = (char *)malloc(sizeof(char) * t_slen + 1);
	if (!new_s || (!s1 && !s2))
		return (NULL);
	j = 0;
	while (*(s1 + j))
		*(new_s + i++) = *(s1 + j++);
	j = 0;
	while (*(s2 + j))
		*(new_s + i++) = *(s2 + j++);
	*(new_s + i) = '\0';
	return (new_s);
}

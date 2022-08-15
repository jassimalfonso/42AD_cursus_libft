/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:58:47 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/15 17:27:11 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set_list);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	begin;
	size_t	end;
	char	*new_s;

	if (!s1)
		return (NULL);
	begin = 0;
	while (s1[begin] && in_set (s1[begin], set))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && in_set(s1[end - 1], set))
		end--;
	new_s = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!new_s)
		return (NULL);
	count = 0;
	while (begin < end)
		new_s[count++] = s1[begin++];
	new_s[count] = '\0';
	return (new_s);
}

int	in_set(char c, char const *set_list)
{
	size_t	i;

	i = 0;
	while (set_list[i])
	{
		if (set_list[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char *str = "church";
// 	char *res;
// 	res = ft_strtrim(str, "ch");
// 	printf("%s", res);
// 	return (0);
// }
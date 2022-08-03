/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:22:51 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/03 14:15:46 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	string_count(char const *s, char c)
{
	size_t	i;
	size_t	num_of_strings;

	i = 0;
	num_of_strings = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			num_of_strings++;
	}
	return (num_of_strings);
}

char	**free_up_allocation(char **array_array)
{
	size_t	i;

	i = 0;
	while (array_array[i])
	{
		free(array_array[i]);
		i++;
	}
	free (array_array);
	return (NULL);
}

char	*get_the_string(char const *str, char character)
{
	size_t	begin_string;
	size_t	char_count;
	char	*the_string;

	char_count = 0;
	while (str[char_count] != character && str[char_count] != '\0')
		char_count++;
	the_string = (char *)malloc(sizeof(*str) * (char_count + 1));
	begin_string = 0;
	while (begin_string < char_count)
	{
		the_string[begin_string] = str[begin_string];
		begin_string++;
	}
	the_string[begin_string] = '\0';
	return (the_string);
}

char	**ft_split(char const *s, char c)
{
	char	**container;
	size_t	i;
	size_t	j;
	size_t	num_of_strings;

	num_of_strings = string_count(s, c);
	container = (char **)malloc(sizeof(s) * (num_of_strings + 1));
	if (!container)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_of_strings)
	{
		while (s[j] == c)
			j++;
		container[i] = get_the_string(&s[j], c);
		if (!container[i])
			return (free_up_allocation(container));
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	container[i] = NULL;
	return (container);
}

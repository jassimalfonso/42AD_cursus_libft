/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:01:47 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:15 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (FT_NULL);
	new_node->next = FT_NULL;
	new_node->content = content;
	return (new_node);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list *list;
// 	list = ft_lstnew((int *)32);
// 	printf("%d\n", (int)list->content);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:41:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:30 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*temp_pos;

	while (*lst)
	{
		temp_pos = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_pos;
	}
	*lst = FT_NULL;
}

// #include <stdio.h>
// #include <stdlib.h>
//
// // void del(void *ptr)
// // {
// // 	free(ptr);
// // }
//
// int	main(void)
// {
// 	t_list *a;
// 	t_list *b;
//
// 	a = ft_lstnew((int *) 24);
// 	b = ft_lstnew((int *) 42);
// 	a->next = b;
// 	printf("%d\n", (int)a->content);
// 	printf("%d\n", (int)b->content);
// 	return (0);
// }
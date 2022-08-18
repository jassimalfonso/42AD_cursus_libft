/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:25:07 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/18 21:44:49 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:16:49 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/23 15:26:12 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (FT_NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list *a;
// 	t_list *b;
//
// 	a = ft_lstnew((int *)24);
// 	b = ft_lstlast(a);
// 	printf("%d\n",(int)a->content);
// 	ft_lstadd_front(&a, ft_lstnew((int *)42));
// 	// printf("%d\n",(int)a->content);
// 	// printf("%d\n",(int)a->next->content);
// 	// printf("%d\n", ft_lstsize(a));
// 	printf("%d\n", (int)b->content);
// 	return (0);
// }
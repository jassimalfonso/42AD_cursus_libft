/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:28:27 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/18 18:46:26 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list *a;
//
// 	a = ft_lstnew((int *)24);
// 	printf("%d\n",(int)a->content);
// 	ft_lstadd_front(&a, ft_lstnew((int *)42));
// 	printf("%d\n",(int)a->content);
// 	printf("%d\n",(int)a->next->content);
// 	return (0);
// }
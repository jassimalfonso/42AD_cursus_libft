/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:52:43 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/18 12:22:09 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*lastelem;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	lastelem = ft_lstlast(*lst);
	lastelem->next = new;
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list *a;
//
// 	a = ft_lstnew((int *)24);
// 	ft_lstadd_back(&a, ft_lstnew((int *)42));
// 	printf("%d\n",(int)a->content);
// 	printf("%d\n",(int)a->next->content);
// 	return (0);
// }
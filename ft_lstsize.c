/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:06:50 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/17 17:21:47 by jalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
// 	printf("%d\n", ft_lstsize(a));
// 	return (0);
// }
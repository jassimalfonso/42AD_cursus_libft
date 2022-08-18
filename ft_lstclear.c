/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalfonso <jalfonso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:41:04 by jalfonso          #+#    #+#             */
/*   Updated: 2022/08/18 17:10:08 by jalfonso         ###   ########.fr       */
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
	*lst = NULL;
}

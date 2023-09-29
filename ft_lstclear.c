/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:27:43 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 12:56:09 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (!lst || *lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		ft_lstdelone(tmp, del);
		lst = tmp;
	}
	*lst = NULL;
}
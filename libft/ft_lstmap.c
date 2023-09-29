/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:08:06 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 13:34:57 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**newlst;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	*newlst = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			if (*newlst)
				ft_lstclear(newlst, del);
			return (NULL);
		}
		ft_lstadd_back(newlst, newnode);
		lst = lst->next;
	}
	return (*newlst);
}
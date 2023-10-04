/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:08:06 by sasano            #+#    #+#             */
/*   Updated: 2023/09/30 15:45:35 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**newlst;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	newnode = ft_lstnew(f(lst->content));
	if (!newnode)
		return (NULL);
	newlst = &newnode;
	lst = lst->next;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(newlst, del);
			return (NULL);
		}
		ft_lstadd_back(newlst, newnode);
		lst = lst->next;
	}
	return (*newlst);
}

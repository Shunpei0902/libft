/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:30:51 by sasano            #+#    #+#             */
/*   Updated: 2023/09/25 21:07:49 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    if (!lst || !new)
        return ;
    if (!(*lst))
        *lst = new;
    else
    {
        tmp =  *lst;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new;
    }
}
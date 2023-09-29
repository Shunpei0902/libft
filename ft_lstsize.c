/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:16:50 by sasano            #+#    #+#             */
/*   Updated: 2023/09/25 21:48:37 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *tmp;

    if (!lst)
        return (0):
    i = 1;
    tmp = lst->next;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}
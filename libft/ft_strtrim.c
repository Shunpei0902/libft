/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:03:49 by sasano            #+#    #+#             */
/*   Updated: 2023/10/02 20:09:29 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include "libft.h"

int	ft_strsetlen(char *s1, char *set)
{
	int		len;

	len = 0;
	while (*s1)
	{
		while (*s1 != *set && *set != 0)
			set++;
		if (!(*set))
			len++;
		s1++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int 	j;
	char	*str1;

	if (!s1 || !set)
		return (0);
	len = ft_strsetlen((char *)s1, (char *)set);
	str1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!str1)
		return (0);
	i = 0;
	while (i < len)
	{
		while (*s1 != * && *setmp != 0)
			setmp++;
		if (!(*setmp))
		{
			*str1 = *s1;
			str1++;
		}
		s1++;
	}
	*str1 = '\0';
	return (start);
} */
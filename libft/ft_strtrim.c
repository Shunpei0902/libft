/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:03:49 by sasano            #+#    #+#             */
/*   Updated: 2023/10/06 14:00:30 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strsetlen(char *s1, char *set)
{
	int	len;

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
	int		j;
	char	*str;

	if (!s1 || !set)
		return (0);
	len = ft_strsetlen((char *)s1, (char *)set);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (*s1 != set[j] && set[j])
			j++;
		if (!set[j])
			str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

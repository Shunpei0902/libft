/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:03:49 by sasano            #+#    #+#             */
/*   Updated: 2023/09/21 17:28:26 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strsetlen(char *s1, char *set)
{
	int		len;
	char	*setmp;

	len = 0;
	while (*s1)
	{
		setmp = set;
		while (*s1 != *setmp && *setmp != 0)
			setmp++;
		if (!(*setmp))
			len++;
		s1++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str1;
	char	*setmp;

	len = ft_strsetlen(s1, set);
	str1 = (char *)malloc(sizeof(char) * len);
	if (!str1)
		return (0);
	while (*s1)
	{
		setmp = set;
		while (*s1 != *setmp && *setmp != 0)
			setmp++;
		if (!(*setmp))
		{
			*str1 = *s1;
			str1++;
		}
		s1++;
	}
	*str1 = 0;
	return (str1);
}

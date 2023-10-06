/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:29:07 by sasano            #+#    #+#             */
/*   Updated: 2023/10/06 12:47:00 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*overstart(void)
{
	char	*substr;

	substr = (char *)malloc(sizeof(char) * 1);
	if (!substr)
		return (NULL);
	substr[0] = 0;
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int		j;
	char	*substr;

	if (!s || !len)
		return (0);
	j = ft_strlen((char *)s) - (int)start;
	if (j < 0)
		return (overstart());
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = *(s + start + i);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:35:55 by sasano            #+#    #+#             */
/*   Updated: 2023/10/06 13:18:35 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size)
	{
		if (i == size - 1)
		{
			dest[i] = '\0';
			break ;
		}
		else if (src[i] == '\0')
		{
			dest[i] = '\0';
			break ;
		}
		else
			dest[i] = src[i];
		i++;
	}
	j = 0;
	while (src[j] != '\0')
		j++;
	return (j);
}
/*
int	main(void)
{
	unsigned int	i;
	char			dest[10];

	i = ft_strlcpy(dest, "kbs", 10);
	printf("%d,%s", i, dest);
	return (0);
}
 */
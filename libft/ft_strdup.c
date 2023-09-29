/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:11:28 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 16:22:05 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;
	char	*cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	cpy = (char *)malloc(i + 1);
	if (!cpy)
	{
		free(cpy);
		return (0);
	}
	p = cpy;
	while (*src)
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*str;
	char	*src;
	char	dest[20];

	strcpy(dest, "jclkbwv");
	src = strdup(dest);
	str = ft_strdup(dest);
	printf("%s\n", str);
	printf("%s\n", src);
	return (0);
}
 */
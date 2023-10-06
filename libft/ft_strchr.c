/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:55:32 by sasano            #+#    #+#             */
/*   Updated: 2023/10/06 15:12:00 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *dest, int c)
{
	while (*dest)
	{
		if (*dest == (unsigned char)c)
			return ((char *)dest);
		dest++;
	}
	if (*dest == 0 && c == 0)
		return ((char *)dest);
	return (0);
}
/*
int	main(void)
{
	char	buf[20];

	strcpy(buf, "123456789");
	printf("%s\n", ft_strchr(buf, 'a'));
	printf("%s\n", strchr(buf, 'a'));
	return (0);
} */

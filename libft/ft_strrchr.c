/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:04 by sasano            #+#    #+#             */
/*   Updated: 2023/10/19 22:45:26 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *dest, int c)
{
	int	i;

	i = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	while (i >= 0)
	{
		if (*dest == (unsigned char)c)
			return (dest);
		dest--;
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	char	buf[20];

	strcpy(buf, "12345644789");
	printf("%s\n", strrchr(buf, 'a'));
	printf("%s\n", ft_strrchr(buf, 'a'));
	return (0);
}
 */
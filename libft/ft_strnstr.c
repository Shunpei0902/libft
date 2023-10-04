/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:05 by sasano            #+#    #+#             */
/*   Updated: 2023/10/02 21:11:34 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *dest, char const *src, size_t n)
{
	int	i;
	int	tmp;

	if (*src == '\0' || !src)
		return ((char *)dest);
	while (n && *dest)
	{
		if (*dest == *src)
		{
			i = 0;
			tmp = n;
			while (src[i++] && dest[i] == src[i])
				tmp--;
			if (tmp >= 0 && !src[i])
				return ((char *)dest);
		}
		dest++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	buf[20];
	char	buf2[20];

	strcpy(buf, "123456789");
	strcpy(buf2, "4567");
	printf("%s\n", strnstr(buf, buf, 9));
	printf("%s\n", ft_strnstr(buf, buf, 9));
	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:05 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 19:59:42 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *dest, char *src, size_t n)
{
	int	i;
	int	tmp;

	if (*src == '\0')
		return (dest);
	while (n && *dest)
	{
		if (*dest == *src)
		{
			i = 0;
			tmp = n;
			while (src[i++] && dest[i] == src[i])
				tmp--;
			if (tmp >= 0 && !src[i])
				return (dest);
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
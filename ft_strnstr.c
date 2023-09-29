/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:45:05 by sasano            #+#    #+#             */
/*   Updated: 2023/09/20 18:42:08 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *dest, char *src, size_t n)
{
	int	i;
	int	j;

	i = 0;
	while (src[i] == 0)
		i++;
	if (src == 0)
		return (dest);
	while (n--)
	{
		if (*dest == *src)
		{
			j = 0;
			while (j < i && dest[j] == src[j])
				j++;
			if (i == j)
				return (dest);
		}
		dest++;
	}
	return (0);
}

int	main(void)
{
	char	buf[20];
	char	buf2[20];

	strcpy(buf, "123456789");
	strcpy(buf2, "4567");
	printf("%s\n", strnstr(buf, "a", 3));
	printf("%s\n", ft_strnstr(buf, "a", 3));
	return (0);
}

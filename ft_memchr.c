/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:40:24 by sasano            #+#    #+#             */
/*   Updated: 2023/09/20 15:46:28 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(void *buf, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)buf == c)
			return (buf);
		buf++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	buf[20];

	strcpy(buf, "123456789");
	printf("%s\n", memchr(buf, '5', 3));
	printf("%s\n", ft_memchr(buf, '5', 3));
	return (0);
}

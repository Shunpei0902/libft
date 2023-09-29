/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:05 by sasano            #+#    #+#             */
/*   Updated: 2023/09/22 21:35:29 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	int		i;
	void	*tmp;

	i = 0;
	tmp = dest;
	while (i < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	return (tmp);
}

int	main(void)
{
	char	buf[20];
	char	buf2[20];

	strcpy(buf, "ABCDEFGHIJK");
	strcpy(buf2, "123456789");
	printf("%s\n", ft_memcpy(buf + 3, buf, 5));
	printf("%s\n", memcpy(buf + 3, buf, 5));
	return (0);
}

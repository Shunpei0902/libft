/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:40:24 by sasano            #+#    #+#             */
/*   Updated: 2023/10/06 15:21:54 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *buf, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)buf == (unsigned char)c)
			return (buf);
		buf++;
	}
	return (0);
}

/* int	main(void)
{
	char	buf[20];

	strcpy(buf, "123456789");
	printf("%s\n", memchr(buf, '5', 3));
	printf("%s\n", ft_memchr(buf, '5', 3));
	return (0);
} */

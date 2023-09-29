/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:52:26 by sasano            #+#    #+#             */
/*   Updated: 2023/09/20 16:40:08 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	while (n)
	{
		if (*(char *)s1 != *(char *)s2)
			return (*(char *)s1 - *(char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int	main(void)
{
	char	buf[20];
	char	buf2[20];

	strcpy(buf, "123456789");
	strcpy(buf2, "1234123456789");
	printf("%d\n", memcmp(buf, buf2, 4));
	printf("%d\n", ft_memcmp(buf, buf2, 4));
	return (0);
}

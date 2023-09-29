/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:52:35 by sasano            #+#    #+#             */
/*   Updated: 2023/09/20 13:32:09 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	int		i;
	void	*tmp;

	i = 0;
	tmp = dest;
	while (i < count)
	{
		*(char *)dest = c;
		dest++;
		i++;
	}
	return (tmp);
}

int	main(void)
{
	char	buf[20];

	strcpy(buf, "ABCDEFGHIJK");
	printf("%s\n", buf);
	printf("%s\n", ft_memset(buf, '1', 3));
	printf("%s\n", memset(buf, '2', 2));
	return (0);
}

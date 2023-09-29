/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:52:35 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 14:22:29 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	void	*tmp;

	tmp = dest;
	while (count--)
	{
		*(char *)dest = c;
		dest++;
	}
	return (tmp);
}

/* int	main(void)
{
	char	buf[20];

	strcpy(buf, "ABCDEFGHIJK");
	printf("%s\n", buf);
	printf("%s\n", ft_memset(buf, '1', 3));
	printf("%s\n", memset(buf, '2', 2));
	return (0);
}
 */
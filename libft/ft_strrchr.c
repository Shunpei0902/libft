/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:04 by sasano            #+#    #+#             */
/*   Updated: 2023/10/06 15:13:56 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *dest, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = dest;
	while (*dest)
	{
		i++;
		dest++;
	}
	while (i >= 0)
	{
		if (tmp[i] == (unsigned char)c)
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:55:32 by sasano            #+#    #+#             */
/*   Updated: 2023/09/20 15:04:25 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *dest, int c)
{
	while (*dest)
	{
		if (*dest == c)
			return (dest);
		dest++;
	}
	return (0);
}

int	main(void)
{
	char	buf[20];

	strcpy(buf, "123456789");
	printf("%s\n", ft_strchr(buf, 'a'));
	printf("%s\n", strchr(buf, 'a'));
	return (0);
}

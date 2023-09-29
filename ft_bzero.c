/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:15:23 by sasano            #+#    #+#             */
/*   Updated: 2023/09/20 18:25:26 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *dest, size_t n)
{
	while (n--)
		*(char *)dest++ = 'a';
}

int	main(void)
{
	char	buf[20];

	strcpy(buf, "ABCDEFGHIJK");
	ft_bzero(buf + 5, 0);
	bzero(buf, 0);
	printf("%s\n", buf);
	return (0);
}

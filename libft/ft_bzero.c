/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:15:23 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 13:28:11 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	while (n--)
		*(char *)dest++ = 0;
}

/* int	main(void)
{
	char	buf[20];

	strcpy(buf, "ABCDEFGHIJK");
	ft_bzero(buf + 5, 0);
	bzero(buf, 0);
	printf("%s\n", buf);
	return (0);
} */

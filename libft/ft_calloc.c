/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:45:58 by sasano            #+#    #+#             */
/*   Updated: 2023/10/03 18:47:35 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
/*
int	main(void)
{
	int	*x;
	int	*y;
	int	i;

	x = calloc(20, sizeof(int));
	y = ft_calloc(20, sizeof(int));
	i = 0;
	while (i < 20)
	{
		printf("%d", x[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 20)
	{
		printf("%d", y[i]);
		i++;
	}
	printf("\n");
	return (0);
}
 */
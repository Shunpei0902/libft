/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:45:58 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 13:28:25 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	void	*tmp;

	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	while (--n)
	{
		*(char *)tmp = 0;
		tmp++;
	}
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
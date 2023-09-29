/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:45:58 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 16:24:57 by sasano           ###   ########.fr       */
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

int	main(void)
{
	int	*x;
	int	*y;
	int	i;

	x = calloc(0, sizeof(int));
	// y = ft_calloc(0, sizeof(int));
	i = 0;
	while (i < 1)
	{
		printf("%d", x[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 1)
	{
		printf("%d", y[i]);
		i++;
	}
	printf("\n");
	return (0);
}

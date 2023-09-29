/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:36:38 by sasano            #+#    #+#             */
/*   Updated: 2023/09/19 22:36:41 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

void	cat(char *dest, char *src, unsigned int size)
{
	int	op;

	op = size;
	while (size > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	if (op)
		*dest = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;
	unsigned int	ini_size;

	i = 0;
	j = 0;
	ini_size = size;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	p = dest;
	while (*dest && size > 0)
	{
		dest++;
		size--;
	}
	cat(dest, src, size);
	if (ini_size <= i)
		return ((ini_size + j));
	return (i + j);
}
/*
int	main(void)
{
	char			dest[20];
	char			src[20];
	int				x;
	unsigned int	result1;
	unsigned int	result2;

	strcpy(dest, "");
	strcpy(src, "ABCD");
	x = 10;
	result1 = ft_strlcat(dest, src, x);
	printf("%s: %u\n", dest, result1);
	strcpy(dest, "");
	strcpy(src, "ABCD");
	result2 = strlcat(dest, src, x);
	printf("%s: %u\n", dest, result2);
	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:28:13 by sasano            #+#    #+#             */
/*   Updated: 2023/10/17 06:23:48 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_nbr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (i + 1);
		i++;
	}
	return (i);
}

long	ft_long(const char *str, int abs)
{
	if (abs == 1 && (ft_strlen_nbr(str) > 19 || (ft_strncmp(str,
					"9223372036854775807", 19) > 0 && ft_strlen(str) == 19)))
		return (__LONG_MAX__);
	if (abs == -1 && (ft_strlen_nbr(str) > 19 || (ft_strncmp(str,
					"9223372036854775808", 19) > 0 && ft_strlen(str) == 19)))
		return (__LONG_MAX__ * -1 - 1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	ans;
	int	abs;

	ans = 0;
	abs = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			abs = -1;
		str++;
	}
	if (ft_long(str, abs))
	{
		ans = ft_long(str, abs);
		return (ans);
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (abs * ans);
}
/*
int	main(void)
{
	printf("%d\n", atoi("    -92233720ttt368547758"));
	printf("%d\n", ft_atoi("   -92233720ttt368547758"));
	return (0);
} */

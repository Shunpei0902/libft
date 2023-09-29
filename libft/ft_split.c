/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:53 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 18:11:27 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countsetlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != 0 && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

int	countstr(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == 0))
			i++;
		s++;
	}
	return (i);
}

char	**str_split(char **dest, char const *s, char c, int len)
{
	int	i;
	int	j;
	int	strlen;

	i = 0;
	while (i++ < len)
	{
		while (*s == c || *s == 0)
			s++;
		strlen = countsetlen(s, c);
		dest[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!dest[i])
		{
			while (i-- >= 0)
				free(dest[i]);
			free(dest);
			return (0);
		}
		j = 0;
		while (*s != 0 && *s != c)
			dest[i][j++] = *s++;
		dest[i][j] = 0;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**dest;

	len = countstr(s, c);
	dest = (char **)malloc(sizeof(char *) * (len + 1));
	if (!dest)
		return (0);
	return (str_split(dest, s, c, len));
}
/*
int	main(void)
{
	int		i;
	char	s[50];
	char	c;
	char	**result;

	c = ',';
	strcpy(s, ",,,Hello,World,,,,This,Is,Test,String,,,");
	result = ft_split(s, c);
	if (!result)
	{
		printf("Memory allocation error!\n");
		return (1);
	}
	i = 0;
	while (result[i++])
	{
		printf("%s\n", result[i]);
		free(result[i]);
	}
	free(result);
	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <sasano.stu>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:53 by sasano            #+#    #+#             */
/*   Updated: 2023/09/29 12:02:49 by sasano           ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		len;
	int		strlen;
	char	**dest;

	len = countstr(s, c);
	dest = (char **)malloc(sizeof(char *) * (len + 1));
	if (!dest)
		return (0);
	while (*s == c)
		s++;
	while (*s)
	{
		len = countsetlen(s, c);
		*dest = (char *)malloc(sizeof(char) * (len + 1));
		if (!(*dest))
		{
			while ()
				free(dest);
			return (0);
		}
		printf("nnn\n");
		while (*s != 0 && *s != c)
		{
			**dest = *s;
			(*dest)++;
			s++;
		}
		*(*dest++) = 0;
		dest++;
	}
	*dest = 0;
	return (dest);
}

int	main(void)
{
	char	s[40];
	char	c;
	char	**result;

	c = ',';
	strcpy(s, "Hello,World,This,Is,Test,String");
	result = ft_split(s, c);
	if (!result)
	{
		printf("Memory allocation error!\n");
		return (1);
	}
	for (int i = 0; result[i]; i++)
	{
		printf("%s\n", result[i]);
		free(result[i]);
	}
	free(result);
	return (0);
}

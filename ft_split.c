/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:45:30 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/20 01:00:32 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *a)
{
	char	*word;
	int		j;

	j = *a;
	word = NULL;
	while (str[*a] != '\0')
	{
		if (str[*a] != c)
		{
			while (str[*a] != '\0' && str[*a] != c)
				*a += 1;
			word = (char *)malloc(sizeof(char) * (*a + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*a += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		a;

	if (s == NULL)
		return (NULL);
	i = 0;
	a = 0;
	j = ft_count((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)s), c, &a);
		if (strs[i] == NULL)
		{
			ft_free(strs[i]);
		}
		i++;
	}
	return (strs);
}

// int	main(void)
// {
// 	char const	*str;
// 	char		c;
// 	int			i;
// 	char		**result;

// 	str = "Hola como estas";
// 	c = ' ';
// 	result = ft_split(str, c);
// 	i = 0;
// 	if (result != NULL)
// 	{
// 		while (result[i] != NULL)
// 		{
// 			printf("Palabra %d: %s\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	return (0);
// }

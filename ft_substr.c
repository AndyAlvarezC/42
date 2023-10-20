/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:46 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/20 14:33:22 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (sub == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < len)
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = 0;
	return (sub);
}

// int	main(void)
// {
// 	char src[] = "Hello World!";
// 	unsigned int start = 5;
// 	size_t len = 3;

// 	char *sub = ft_substr(src, start, len);

// 	if (sub != NULL)
// 	{
// 		printf("%s\n", sub);
// 		free(sub);
// 	}
// 	return (0);
// }
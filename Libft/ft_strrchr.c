/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:48:22 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 20:58:12 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "Hello World";
// 	char search = 'l';

// 	char *result = ft_strrchr(s, search);

// 	if (result)
// 	{
// 		printf("La ultima '%c' posicion %ld\n", search, result - s);
// 	}
// 	else
// 	{
// 		printf("'%c' No se encontro.\n", search);
// 	}

// 	return (0);
// }
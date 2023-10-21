/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:07:14 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 21:05:41 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = s1;
	const unsigned char	*str2 = s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "Haola";
// 	char str2[] = "Hbola";

// 	int result = ft_memcmp(str1, str2, 4);

// 	if (result == 0)
// 	{
// 		printf("Son iguales.\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("%d \n");
// 	}
// 	else
// 	{
// 		printf("%d \n");
// 	}

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:07:54 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 19:16:51 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	n;

	n = 0;
	if (src < dst)
	{
		n = len;
		while (n > 0)
		{
			n--;
			((unsigned char *)dst)[n]
				= ((unsigned char *)src)[n];
		}
	}
	else
	{
		n = 0;
		while (n < len)
		{
			((unsigned char *)dst)[n]
				= ((unsigned char *)src)[n];
			n++;
		}
	}
	return (dst);
}

// int main() {
// 	char source[] = "Hello, World!";
// 	char destination[15];

// 	ft_memmove(destination, source, 9);

// 	printf("%s\n", destination);

// 	char str[] = "Hello, World!";
// 	memmove(str + 7, str + 1, 5);
// 		// Copia "World" desde la posición 1 a la posición 7
// 	printf("%s\n", str); // Imprime "HWorld, World!"
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:07:54 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/20 01:03:04 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	longitud;

	longitud = 0;
	if (src < dest)
	{
		longitud = n;
		while (longitud > 0)
		{
			longitud--;
			((unsigned char *)dest)[longitud]
				= ((unsigned char *)src)[longitud];
		}
	}
	else
	{
		longitud = 0;
		while (longitud < n)
		{
			((unsigned char *)dest)[longitud]
				= ((unsigned char *)src)[longitud];
			longitud++;
		}
	}
	return (dest);
}

/*int main() {
	char source[] = "Hello, World!";
	char destination[15];

	ft_memmove(destination, source, 9);

	printf("%s\n", destination);


	char str[] = "Hello, World!";
	memmove(str + 7, str + 1, 5);
		// Copia "World" desde la posición 1 a la posición 7
	printf("%s\n", str); // Imprime "HWorld, World!"
	return (0);
}*/

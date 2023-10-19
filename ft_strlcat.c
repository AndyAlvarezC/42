/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:06:16 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/14 12:06:16 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	espacio;
	size_t	longitud;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	espacio = size - i - 1;
	while (src[j] != '\0' && j < espacio)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	longitud = i + ft_strlen((char *)src);
	return (longitud);
}

// int main() {
//     char dst[20] = "Destino";
//     char src[] = " Adios";
//     size_t longitud = ft_strlcat(dst, src, sizeof(dst));

//     printf("%s \n", dst);
//     printf("%zu ", longitud);
//     return (0);
// }

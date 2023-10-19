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

unsigned int ft_strlen(char *cad) {
    int i = 0;
    while (cad[i] != '\0') {
        i++;
    }
    return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t i = 0;
    size_t j = 0;

    while (dst[i] != '\0' && i < size) {
        i++;
    }

    size_t espacio = size - i - 1;

    while (src[j] != '\0' && j < espacio) {
        dst[i] = src[j];
        i++;
        j++;
    }

    dst[i] = '\0';

    size_t longitud = i + ft_strlen(src);

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


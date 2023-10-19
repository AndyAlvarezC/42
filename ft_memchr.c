/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:06:46 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/19 13:06:46 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *buffer, int ch, size_t cuenta)
{
    const unsigned char *src = buffer;
    size_t i;

    i = 0;
        while(i <= cuenta)
        {
            if(src[i] == ch)
                return (void *)(src + i);
            else
                i++;
        }
    return  NULL;
}

// int main()
// {
//     const char *cadena = "Hello, World!";
//     char caracter_a_buscar = 'W';
//     size_t longitud = strlen(cadena);

//     void *resultado = ft_memchr(cadena, caracter_a_buscar, longitud);

//     if (resultado != NULL)
//     {
//         printf("El carácter '%c' se encontró en la posición %ld.\n", caracter_a_buscar, (char *)resultado - cadena);
//     }
//     else
//     {
//         printf("El carácter '%c' no se encontró en la cadena.\n", caracter_a_buscar);
//     }

//     return 0;
// }

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
    int i;

    i = 0;
        while(i <= cuenta)
        {
            if (src[i] == ch)
                return(src);
            else
                i++;
        }
    return  NULL;
}

// int main()
// {
//     const char buffer[] = "Hello, World!";
//     int ch = 'e';

//     void *resultado = ft_memchr(buffer, ch, sizeof(buffer));

//     if (resultado != NULL)
//     {
//         printf("Caracter encontrado\n", (unsigned long)((unsigned char *)result - (unsigned char *)buffer));
//     }
//     else
//     {
//         printf("Caracter no encontrado.\n");
//     }

//     return 0;
// }
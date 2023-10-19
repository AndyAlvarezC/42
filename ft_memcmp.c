/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:07:14 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/19 13:07:14 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *buf1, const void *buf2, size_t cuenta)
{
    const unsigned char *str1 = buf1;
    const unsigned char *str2 = buf2;
    size_t i;

    i = 0;
    while(i <= cuenta)
    {
        if(str1[i] == str2[i])
        i++;
        if(str1[i] == str2[i] && str1[i] == '\0' && str2[i] == '\0')
        return(0);
    }
    return(str1[i] - str2[i]);
}

// int main()
// {
//     char str1[] = "Haola";
//     char str2[] = "Hcola";

//     int resultado = ft_memcmp(str1, str2, 4);

//     if (resultado == 0)
//     {
//         printf("Son iguales.\n");
//     }
//     else if (resultado < 0)
//     {
//         printf("%d \n");
//     }
//     else
//     {
//         printf("%d \n");
//     }

//     return 0;
// }
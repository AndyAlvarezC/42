/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:24:28 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/14 12:24:28 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t cuenta)
{
    int i;
    unsigned char *p = dest;
    const unsigned char *a = src;

    i = 0;

    while(i < cuenta)
    {
        p[i] = a[i];
        i++;
    }
}

// int main()
// {
//     char src[] = "Hola";
//     char dest[10];

//     ft_memcpy(dest, src, 6);
//     printf("Buffer: %s\n", dest);

//     return (0);
// }
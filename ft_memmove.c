/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:07:54 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/15 18:07:54 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *p = dest;
    const unsigned char *a = src;
    char temp;

    i = 0;

    while(i < n)
    {
    }
}


#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hola, mundo";
    char dest[10];

    ft_memmove(dest, src, 5);
    printf("%s\n", dest);

    char str[] = "Hola, mundo!";
    memmove(str + 7, str + 1, 5);
    printf("%s\n", str);

    return (0);
}

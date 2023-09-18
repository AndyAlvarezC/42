/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:51:31 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/13 18:51:31 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *buf, int c, size_t cuenta)
{
    int i;
    unsigned char *p = buf;

    i = 0;

    while(i < cuenta)
    {
        p[i] = c;
        i++;
    }
}

// int main()
// {
//     char buf[] = "Hola";

//     ft_memset(buf, 'a', 8);
//     printf("Buffer: %s\n", buf);

//     return (0);
// }
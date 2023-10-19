/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:07:48 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/14 12:07:48 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *p = s;

    i = 0;
    while(i < n)
    {
        p[i] = 0;
        i++;
    }
}

// int main() {
//     char buffer[10];
    
//     ft_bzero(buffer, sizeof(buffer));
    
//     return 0;
// }
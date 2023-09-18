/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:59:10 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/13 18:59:10 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

// int main()
// {
//     printf("%d", ft_strlen("hola"));
// }

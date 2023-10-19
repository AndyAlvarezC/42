/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:41:04 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/13 18:41:04 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if((c >= 0 && c <= 127))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

// int main()
// {
//     printf("Caracter: %d", ft_isascii('s'));
// }
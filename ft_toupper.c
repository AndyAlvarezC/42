/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:43:55 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/18 20:43:55 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch -= 32;
        return(ch);
}

// int main()
// { 
//     printf("%c", ft_toupper('a'));
//     return (0);
// }
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

size_t	ft_strlen(char *cad)
{
	int	i;

	i = 0;
	while (cad[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
//     printf("%d", ft_strlen("hola"));
// }

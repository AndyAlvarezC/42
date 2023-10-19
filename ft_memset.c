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

void	*ft_memset(void *buf, int ch, size_t cuenta)
{
	size_t			i;
	unsigned char	*p;

	p = buf;
	i = 0;
	while (i < cuenta)
	{
		p[i] = ch;
		i++;
	}
	return (buf);
}

// int main()
// {
//     char buf[] = "Hola";

//     ft_memset(buf, 'u', 13);
//     printf("Buffer: %s\n", buf);

//     return (0);
// }
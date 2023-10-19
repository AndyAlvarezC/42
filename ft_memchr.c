/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:06:46 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/20 01:05:24 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buffer, int ch, size_t cuenta)
{
	const unsigned char	*src = buffer;
	size_t				i;

	i = 0;
	while (i <= cuenta)
	{
		if (src[i] == ch)
			return ((void *)(src + i));
		else
			i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *cadena = "Hello, World!";
//     char buscar = 'W';
//     size_t longitud = strlen(cadena);

//     void *resultado = ft_memchr(cadena, buscar, longitud);

//     if (resultado != NULL)
//     {
//         printf(" '%c'  %ld.\n", buscar, (char *)resultado - cadena);
//     }
//     else
//     {
//         printf("'%c' .\n", caracter_a_buscar);
//     }
//     return (0);
// }

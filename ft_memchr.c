/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:06:46 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 21:03:31 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src = s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)src + i);
		else
			i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "Hello, World!";
//     char c = 'W';
//     size_t n = ft_strlen(str);

//     void *result = ft_memchr(str, c, n);

//     if (result != NULL)
//     {
//         printf("Se encontro '%c' en %ld.\n", c, (char *)result - str);
//     }
//     else
//     {
//         printf("El carácter '%c' no se encontró.\n", c);
//     }

//     return (0);
// }
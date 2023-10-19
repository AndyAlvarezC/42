/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:57:08 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/14 11:57:08 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	a;
	unsigned int	i;

	a = ft_strlen((char *)src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a);
}

// int	main(void)
// {
// 	char	src[] = "Hola";
// 	char	dest[] = "Adios";

// 	printf("%d | %s\n", ft_strlcpy(dest, src, 5), dest);
// }
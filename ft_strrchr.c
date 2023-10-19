/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:48:22 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/19 12:48:22 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)str);
		else
			i--;
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "Adios";
//     char caracter = 'd';

//     char *resultado = ft_strrchr(str, caracter);

//     if (resultado != NULL) {
//         printf("Se encontró '%c'.\n", caracter, resultado - str);
//     } else {
//         printf("No se encontró '%c' en la cadena.\n", caracter);
//     }

//     return (0);
// }
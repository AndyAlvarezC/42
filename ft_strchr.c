/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:59:16 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/18 20:59:16 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *cad, int ch)
{
	int	i;

	i = 0;
	while (cad[i] != '\0')
	{
		if (cad[i] == ch)
			return (cad);
		else
			i++;
	}
	return (NULL);
}

// int main()
// {
//     char *cad = "Adios";
//     char caracter = 'd';

//     char *resultado = ft_strchr(cad, caracter);

//     if (resultado != NULL)
//     {
//         printf("Se a encontrado %c\n", caracter, resultado - cad);
//     }
//     else
//     {
//         printf("No se a encontrado %c\n", caracter);
//     }

//     return (0);
// }
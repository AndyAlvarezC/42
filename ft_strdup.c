/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:40:08 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 19:31:06 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include "ft_strlen.c"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen((char *)s1);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main() {
// 	const char *original = "Hola, mundo!";
// 	char *copia = ft_strdup(original);

// 	if (copia != NULL) {
// 		printf("Copia: %s\n", copia);
// 		free(copia);
// 	} else {
// 		printf("No se pudo duplicar la cadena.\n");
// 	}
// 	return (0);
// }
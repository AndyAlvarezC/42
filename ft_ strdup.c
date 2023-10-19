/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:40:08 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/19 21:40:08 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

char *ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main() {
    const char *original = "Hola, mundo!";
    char *copia = ft_strdup(original);

    if (copia != NULL) {
        printf("Copia: %s\n", copia);
        free(copia); // Liberar la memoria asignada dinámicamente
    } else {
        printf("No se pudo duplicar la cadena.\n");
    }

    return 0;
}*/



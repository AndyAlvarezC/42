/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:41:13 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/17 19:41:13 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen((char *)s1);
		while (s1[i] && ft_strchr((char *)set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr((char *)set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}

// int main() {
//     char original[] = "   This is a test string.   ";
//     char set[] = " \t\n";

//     char *trimmed = ft_strtrim(original, set);

//     if (trimmed) {
//         printf("Cadena recortada: \"%s\"\n", trimmed);
//         free(trimmed);
//     } else {
//         printf("Error: No se pudo asignar memoria para la cadena recortada.\n");
//     }

//     return 0;
// }





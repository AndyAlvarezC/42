/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:25:11 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/17 19:25:11 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;

	i = 0;
	j = 0;
	s3 = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

// int main()
// {
//     char *s1 = "Hola, ";
//     char *s2 = "mundo!";
//     char *result = ft_strjoin(s1, s2);

//     if (result != NULL) {
//         printf("%s\n", result);
//         free(result);
//     } else {
//         printf("Error en ft_strjoin: no se pudo asignar memoria.\n");
//     }

//     return (0);
// }
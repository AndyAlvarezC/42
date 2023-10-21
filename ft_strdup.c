/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:40:08 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 21:31:57 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// 	const char *s1 = "Hola, mundo!";
// 	char *s2 = ft_strdup(s1);

// 	if (s2 != NULL) 
// 	{
// 		printf("Copia: %s\n", s2);
// 		free(s2);
// 	} 
// 	else 
// 	{
// 		printf("Nah\n");
// 	}
// 	return (0);
// }
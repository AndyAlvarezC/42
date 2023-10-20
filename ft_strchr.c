/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:59:16 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/20 20:48:11 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

// int main() {
//     const char *s = "Hello, World!";
//     int character = 'o';

//     char *result = ft_strchr(s, character);

//     if (result) {
//         printf("Se a encontrado '%c' en la cadena: %s\n", character, result);
//     } else {
//         printf("No encontrado'%c'\n", character);
//     }

//     return (0);
// }
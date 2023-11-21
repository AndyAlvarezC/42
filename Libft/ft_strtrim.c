/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:41:13 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 21:39:30 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
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
//     char original[] = "	Hell o, Wo rld!	";
//     char set[] = " \t\n";

//     char *trimmed = ft_strtrim(original, set);

//     if (trimmed) 
// 	{
//         printf("\"%s\"\n", trimmed);
//         free(trimmed);
//     }
//     return (0);
// }

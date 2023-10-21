/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:22:03 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/20 23:04:59 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;

	if (!*to_find)
		return ((char *)str);
	else if (!n)
		return (NULL);
	if (*to_find == 0 || str == to_find)
		return ((char *)str);
	i = ft_strlen((char *)to_find);
	if (!*to_find)
		return ((char *)str);
	while (*str && i <= n)
	{
		if (!(ft_strncmp((char *)str, (char *)to_find, i)))
			return ((char *)str);
		str++;
		n--;
	}
	return (0);
}

// int main () {
//     const char str[20] = "TutorialsPoin";
//     const char find[10] = "to";
//     char *result;

//     result = ft_strnstr(str, find, 4);
//     printf("%s\n", result);
//     return(0);
// }
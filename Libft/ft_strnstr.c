/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:22:03 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/21 21:09:13 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	if (!*needle)
		return ((char *)haystack);
	else if (!len)
		return (NULL);
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	i = ft_strlen((char *)needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && i <= len)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

// int main () {
//     const char haystack[20] = "Hellow, World!";
//     const char find[10] = "o";
//     char *result;

//     result = ft_strnstr(haystack, find, 4);
//     printf("%s\n", result);
//     return(0);
// }
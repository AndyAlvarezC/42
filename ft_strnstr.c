/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:22:03 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/18 14:22:03 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned int	i;

    if (!*to_find)
        return ((char *)str);
    else if (!n)
        return (NULL);
        
    if(*to_find == 0 || str == to_find)
            return ((char *)str);

	i = ft_strlen((char *)to_find);
	if (!*to_find)
		return ((char *)str);
	while (*str && i <= n--)
	{
			if (!(ft_strncmp((char *)str, (char *)to_find, n)))
                return ((char *)str);
		str++;
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
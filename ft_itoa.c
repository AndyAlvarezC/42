/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:53:12 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/17 20:53:12 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(int num)
{
	unsigned int	len;
	
	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len += 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char *s1;
	int num;
	unsigned int len;

	len = ft_size(n);
	num = 0;
	s1 = (char *) malloc(sizeof(char) * (len + 1));
	if (s1 == NULL)
		return (NULL);
	if (num < 0)
	{
		s1[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		s1[0] = '0';

	s1[len] = '\0';

	while (num != 0)
	{
		s1[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (s1);
}

// int main() {
//     printf("%s\n", ft_itoa(132123));
//     return (0);
// }

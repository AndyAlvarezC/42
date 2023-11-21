/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:51:12 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/21 21:08:57 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_hexalen(unsigned int num)
{
	size_t	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 16;
	}
	return (i);
}

static char	ft_convert(unsigned int num, char format)
{
	if (num < 10 && format == 'X')
		return (num + '0');
	else if (num < 10 && format == 'x')
		return (num + '0');
	else if (format == 'X')
		return (num - 10 + 'A');
	else if (format == 'x')
		return (num - 10 + 'a');
	return ('\0');
}

void	ft_hexa(unsigned int num, char *format)
{
	char	*s;
	int		i;
	int		aux;
	size_t	len;

	len = ft_hexalen(num);
	i = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	s = (char *)malloc(len + 1);
	if (s == NULL)
		return ;
	while (num > 0)
	{
		aux = num % 16;
		s[i] = ft_convert(aux, *format);
		i++;
		num /= 16;
	}
	while (i > 0)
		write(1, &s[--i], 1);
	free(s);
}

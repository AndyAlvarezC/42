/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:07:47 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/21 21:08:54 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf(char *s, ...)
{
	va_list	ar;
	char	format;

	va_start(ar, s);
	while (*s)
	{
		if (*s == 'c' || *s == '%')
			ft_putchar(va_arg(ar, int));
		else if (*s == 's')
			ft_putstr(va_arg(ar, char *));
		else if (*s == 'p')
			ft_ptr(va_arg(ar, void *));
		else if (*s == 'd' || *s == 'i')
			ft_putnbr(va_arg(ar, int));
		else if (*s == 'u')
			ft_putunbr(va_arg(ar, unsigned int));
		else if (*s == 'x' || *s == 'X')
		{
			format = *s;
			ft_hexa(va_arg(ar, unsigned int), &format);
		}
		s++;
	}
	va_end(ar);
}

int main(void)
{
	int n = 20;

	ft_printf("%d\n", n);	
	printf("%d\n", n);

	return (0);
}
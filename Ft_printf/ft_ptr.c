/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:35:22 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/24 18:58:21 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_ptr(void *v)
{
	unsigned long	i;
	char			*str;
	int				j;

	i = (long unsigned int)v;
	str = ft_itoa_base(i, "0123456789abcdef");
	j = ft_putstr(str);
	free(str);
	return (j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:35:22 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/21 21:17:08 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_ptr(void *v)
{
	unsigned long	i;
	char			*str;

	i = (long unsigned int)v;
	str = ft_itoa_base(i, "0123456789abcdef");
	ft_putstr(str);
	free(str);
}

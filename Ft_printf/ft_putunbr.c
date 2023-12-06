/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:48:32 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/24 18:58:58 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr(unsigned long n)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_base(n, "0123456789");
	i = ft_putstr(str);
	free(str);
	return (i);
}

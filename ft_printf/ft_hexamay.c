/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexamay.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:39:34 by andalvar          #+#    #+#             */
/*   Updated: 2023/12/21 11:07:59 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexamay(unsigned int n)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_base(n, "0123456789ABCDEF");
	i = ft_putstr(str);
	free(str);
	return (i);
}

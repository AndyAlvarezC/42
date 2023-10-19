/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:13:49 by andalvar          #+#    #+#             */
/*   Updated: 2023/09/19 21:13:49 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_bzero.c"

void	*ft_calloc(size_t num, size_t size)
{
	void	*resultado;

	resultado = malloc(num * size);
	
	if (!resultado)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(resultado, (num * size));
		return (resultado);
	}
}
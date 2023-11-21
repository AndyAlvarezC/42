/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:09:24 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/21 21:08:48 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_printf(char *s, ...);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_hexa(unsigned int num, char *format);
char	*ft_itoa_base(unsigned long long n, char *base);
size_t	ft_len(unsigned long long n, char *base);
void	ft_ptr(void *v);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putunbr(unsigned int n);
size_t	ft_strlen(const char *s);

#endif
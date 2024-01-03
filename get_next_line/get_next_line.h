/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:10:32 by andalvar          #+#    #+#             */
/*   Updated: 2023/11/28 14:10:32 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

size_t	ft_strlen(char *str);
char	*ft_get_line(char *buff);
char	*ft_next_line(char *buff);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_read_content(int fd, char *content);
char	*get_next_line(int fd);
char	*frees(char *buffer, char *buf);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, unsigned int n);

#endif

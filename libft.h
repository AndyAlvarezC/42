#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);
void *ft_memset(void *buf, int c, size_t cuenta);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t cuenta);
void *memmove(void *dest, const void *src, size_t n);
int	ft_strlcpy(char *dest, char *src, unsigned int size);
char    *ft_strlcat(char *dest, char *src, size_t size);

int	ft_strncmp(const char *s1, const char *s2, unsigned int n);

char	*ft_strnstr(const char *str, const char *to_find, size_t n);
int	ft_atoi(char *str);

#endif
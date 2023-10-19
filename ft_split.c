/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:45:30 by andalvar          #+#    #+#             */
/*   Updated: 2023/10/18 22:45:30 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char *strs) //Libera memoria asignada dinamicamente(malloc) para un array de cadenas
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_count(char *str, char c) //Cuenta la cantidad de palabras de una cadena(str), la cual esta delimitadas por un caracter epecifico(c) y devuelve el rencuento de palabras
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static void	ft_strcpy(char *word, char *str, char c, int j) //Copia una subcadena de la cadena(str) en la cadena(word), hasta que encuentre un caracter especifico(c), o llege al final de la cadena
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *a) //Asigna memoria dinamicamente para almacenar esa palabra en una nueva cadena y copia una palabra desde una cadena(str) hasta que encuentre el caracter delimitador(c)
{
	char	*word;
	int		j;

	j = *a;
	word = NULL;
	while (str[*a] != '\0')
	{
		if (str[*a] != c)
		{
			while (str[*a] != '\0' && str[*a] != c)
				*a += 1;
			word = (char *)malloc(sizeof(char) * (*a + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*a += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char **ft_split(char const *s, char c) //Divide una cadena en subcadenas basadas en un caracter delimitador(c) y almacena esas subcadenas en un array de punteros a cadenas (char **strs)
{
	char	**strs;
	int		i;
	int		j;
	int		a;

	if (s == NULL)
		return (NULL);
	i = 0;
	a = 0;
	j = ft_count((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)s), c, &a);
		if (strs[i] == NULL)
		{
			ft_free(strs[i]);
		}
		i++;
	}
	return (strs);
}

int main()
{
    char const *str = "Hola como estas";
    char c = ' ';
	int i;


    char **result = ft_split(str, c);
	i = 0;

	if (result != NULL) 
	{
		while (result[i] != NULL) 
		{
			printf("Palabra %d: %s\n", i, result[i]);
            free(result[i]);
			i++;
        }
        free(result);
	}
    return 0;
}

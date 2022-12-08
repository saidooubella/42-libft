/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:13:03 by soubella          #+#    #+#             */
/*   Updated: 2022/10/09 18:05:56 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	calc_elements_size(char const *str, char c)
{
	int	count;

	count = 0;
	while (1)
	{
		while (*str && c == *str)
			str++;
		if (*str == 0)
			break ;
		count++;
		while (*str && c != *str)
			str++;
	}
	return (count);
}

static char	*make_string(char const *str, char c, char **result)
{
	char	*string;
	int		length;
	int		i;

	length = 0;
	while (str[length] && c != str[length])
		length++;
	string = malloc(sizeof(char) * (length + 1));
	if (string != 0)
	{
		i = 0;
		while (i < length)
			string[i++] = *str++;
		string[i] = 0;
	}
	*result = string;
	return ((char *) str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		size;
	int		i;

	size = calc_elements_size(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (result == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (c == *s)
			s++;
		s = make_string(s, c, &result[i]);
		if (result[i] == 0)
		{
			while (i >= 0)
				free(result[i--]);
			free(result);
			return (0);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

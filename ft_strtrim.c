/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:46:46 by soubella          #+#    #+#             */
/*   Updated: 2022/10/09 15:53:51 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	contains(char const *s1, char ch)
{
	while (*s1)
		if (*s1++ == ch)
			return (1);
	return (0);
}

static int	calc_trimmed_size(char const **s1, char const *set)
{
	size_t	index;
	size_t	size;
	char	*str;

	str = (char *) *s1;
	while (contains(set, *str))
		str++;
	size = ft_strlen(str);
	index = size - 1;
	while (size > 0 && contains(set, str[index]))
	{
		index--;
		size--;
	}
	*s1 = str;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	size;
	char	*res;

	size = calc_trimmed_size(&s1, set);
	res = malloc(size + 1);
	if (res == 0)
		return (0);
	index = -1;
	while (++index < size)
		res[index] = s1[index];
	res[index] = 0;
	return (res);
}

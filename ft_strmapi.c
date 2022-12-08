/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:32:44 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 10:39:42 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	index;
	size_t	size;

	size = ft_strlen(s);
	result = malloc(size + 1);
	if (result == 0)
		return (0);
	index = -1;
	while (++index < size)
		result[index] = f(index, s[index]);
	result[index] = 0;
	return (result);
}

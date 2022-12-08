/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:37:42 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 19:03:19 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static char	*append(char *s1, char const *s2)
{
	while (*s2)
		*s1++ = *s2++;
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*res;

	size = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(size + 1);
	if (res == 0)
		return (0);
	append(append(res, s1), s2);
	res[size] = 0;
	return (res);
}

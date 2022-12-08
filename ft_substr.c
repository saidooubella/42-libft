/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:28:34 by soubella          #+#    #+#             */
/*   Updated: 2022/10/08 11:00:11 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	full_size;
	size_t	sub_size;

	if (!s)
		return (0);
	full_size = ft_strlen(s);
	sub_size = ft_strlen(start + s);
	if (len > sub_size)
		len = sub_size;
	substring = malloc(len + 1);
	if (substring == 0)
		return (0);
	if (start < ft_strlen(s))
		ft_memcpy(substring, s + start, len);
	substring[len] = 0;
	return (substring);
}

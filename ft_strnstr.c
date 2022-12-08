/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:42:09 by soubella          #+#    #+#             */
/*   Updated: 2022/10/08 11:11:49 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strequal(const char *haystack, size_t limit_len
	, const char *needle, size_t needle_len)
{
	size_t	i;

	i = 0;
	while (i < needle_len)
	{
		if (i >= limit_len || haystack[i] != needle[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	offset;

	if (*needle == 0)
		return ((char *) haystack);
	needle_len = ft_strlen(needle);
	offset = 0;
	while (offset < len && haystack[offset])
	{
		if (ft_strequal(haystack + offset, len - offset, needle, needle_len))
			return ((char *)(haystack + offset));
		offset++;
	}
	return (0);
}

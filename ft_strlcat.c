/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:26:14 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 14:11:09 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (dstsize + src_length);
	dst_length = ft_strlen(dst);
	dst += dst_length;
	if (dstsize == 0 || dst_length >= dstsize)
		return (dstsize + src_length);
	i = -1;
	while (src[++i] && i < dstsize - dst_length - 1)
		dst[i] = src[i];
	dst[i] = 0;
	return (dst_length + src_length);
}

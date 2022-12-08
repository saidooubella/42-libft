/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:03:25 by soubella          #+#    #+#             */
/*   Updated: 2022/10/10 12:47:17 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*from;
	char	*to;

	from = (char *) src;
	to = (char *) dst;
	if (dst == src || len == 0)
		return (dst);
	if (to > from)
	{
		from += len - 1;
		to += len - 1;
		while (from >= (char *) src)
			*to-- = *from--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

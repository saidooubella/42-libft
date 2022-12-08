/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:11:59 by soubella          #+#    #+#             */
/*   Updated: 2022/10/05 20:16:27 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*from;
	char	*to;

	from = (char *) src;
	to = (char *) dst;
	index = -1;
	if (dst != src && n != 0)
		while (++index < n)
			to[index] = from[index];
	return (dst);
}

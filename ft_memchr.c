/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:27:59 by soubella          #+#    #+#             */
/*   Updated: 2022/10/08 10:34:37 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*str;

	str = (char *) s;
	index = 0;
	while (index < n)
	{
		if (str[index] == (char) c)
			return ((char *)(str + index));
		index++;
	}
	return (0);
}

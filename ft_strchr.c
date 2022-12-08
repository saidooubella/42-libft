/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:06:42 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 14:45:10 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(str) + 1;
	index = 0;
	while (index < length)
	{
		if (str[index] == (char) ch)
			return ((char *)(str + index));
		index++;
	}
	return (0);
}

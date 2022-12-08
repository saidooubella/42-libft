/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:58:27 by soubella          #+#    #+#             */
/*   Updated: 2022/10/05 14:09:27 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	length;
	int		index;

	length = ft_strlen(str) + 1;
	index = length - 1;
	while (index >= 0)
	{
		if (str[index] == (char) ch)
			return ((char *)(str + index));
		index--;
	}
	return (0);
}

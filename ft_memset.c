/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:08:01 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 12:02:36 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int val, size_t len)
{
	char	*str;
	size_t	index;

	str = (char *) ptr;
	index = 0;
	while (index < len)
		str[index++] = val;
	return (ptr);
}

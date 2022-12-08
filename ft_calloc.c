/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:32:17 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 13:26:26 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	full_size;
	void	*mem;

	full_size = count * size;
	mem = malloc(full_size);
	if (mem == 0)
	{
		errno = ENOMEM;
		return (0);
	}
	ft_bzero(mem, full_size);
	return (mem);
}

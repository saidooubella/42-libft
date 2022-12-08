/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:34:29 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 12:46:36 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	if (n == 0)
		return ;
	str = (char *) s;
	while ((size_t)(str - (char *) s) < n)
		*str++ = 0;
}

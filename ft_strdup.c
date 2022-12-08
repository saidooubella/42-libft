/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:18:32 by soubella          #+#    #+#             */
/*   Updated: 2022/10/05 14:33:37 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	char	*temp;

	result = (char *) malloc(ft_strlen(s1) + 1);
	if (result == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	temp = result;
	while (*s1)
		*temp++ = *s1++;
	*temp = 0;
	return (result);
}

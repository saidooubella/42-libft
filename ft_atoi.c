/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:56:47 by soubella          #+#    #+#             */
/*   Updated: 2022/10/09 18:21:05 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == ' ' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;

	sign = 1;
	res = 0;
	while (is_whitespace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:23:20 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 11:23:11 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	digits_count(unsigned int number, int base)
{
	int	count;

	if (number == 0)
		return (1);
	count = 0;
	while (number != 0)
	{
		number /= base;
		count++;
	}
	return (count);
}

static int	calc_full_size(unsigned int number, int is_negative, int base_size)
{
	int	digits_cnt;

	digits_cnt = digits_count(number, base_size);
	if (is_negative)
		return (digits_cnt + 2);
	return (digits_cnt + 1);
}

static char	*int_to_string(int is_negative, unsigned int number,
	char *base_to, int base_to_size)
{
	char	*result;
	int		size;
	int		max;
	int		i;

	size = calc_full_size(number, is_negative, base_to_size);
	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	max = 0;
	if (is_negative)
	{
		result[0] = '-';
		max = 1;
	}
	i = size - 2;
	while (i >= max)
	{
		result[i--] = base_to[number % base_to_size];
		number /= base_to_size;
	}
	result[size - 1] = 0;
	return (result);
}

char	*ft_itoa(int n)
{
	unsigned int	number;

	number = n;
	if (n < 0)
		number = -n;
	return (int_to_string(n < 0, number, "0123456789", 10));
}

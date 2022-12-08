/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:46:11 by soubella          #+#    #+#             */
/*   Updated: 2022/10/06 11:40:06 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

static void	helper(unsigned int number, int fd)
{
	char	c;

	if (number >= 10)
		helper(number / 10, fd);
	c = number % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		number = -n;
	}
	helper(number, fd);
}

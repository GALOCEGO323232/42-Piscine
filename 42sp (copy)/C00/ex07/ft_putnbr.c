/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:54:23 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/02 16:09:38 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	result;

	result = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		result = '0' + (nb % 10);
		write(1, &result, 1);
	}
	else
	{
		result = '0' + nb;
		write(1, &result, 1);
	}
}

/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/

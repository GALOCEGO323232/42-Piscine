/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:32:18 by kgagliar          #+#    #+#             */
/*   Updated: 2025/05/31 16:45:04 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				write(1, digit, 3);
				if (!(digit[0] == '7' && digit[1] == '8' && digit[2] == '9'))
					write(1, ", ", 2);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
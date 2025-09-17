/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:53:03 by kgagliar          #+#    #+#             */
/*   Updated: 2025/05/31 15:49:50 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	out[5];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			out[0] = a / 10 + '0';
			out[1] = a % 10 + '0';
			out[2] = ' ';
			out[3] = b / 10 + '0';
			out[4] = b % 10 + '0';
			write(1, out, 5);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/* 
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/

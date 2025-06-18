/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:34:21 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 14:33:20 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;

	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);

}
*/

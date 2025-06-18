/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:13:20 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/05 15:35:59 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	char	*string;
	int		tamanho;

	string = "JA ERA";
	tamanho = ft_strlen(string);
	printf("%d\n", tamanho);
	return (0);
}
*/

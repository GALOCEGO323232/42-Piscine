/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:22:17 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/09 11:32:08 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		resultado;

	str1 = "abc";
	str2 = "abd";
	resultado = ft_strcmp(str1, str2);
	printf("Resultado da comparação: %d\n", resultado);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:24:46 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/09 11:31:19 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "COD";
	char	src[100] = "Exemplo ";

	ft_strncat(dest, src, 5);
	printf("Destino: %s\n", dest);
	printf("Origem: %s\n", src);
	return (0);
}
*/
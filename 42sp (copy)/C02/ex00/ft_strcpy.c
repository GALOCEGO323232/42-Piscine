/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:23:08 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:42:17 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[100];
	char	src[100] = "Exemplo ";

	ft_strcpy(dest, src);
	printf("Destino: %s\n", dest);
	printf("Origem: %s\n", src);
	return (0);
}
*/

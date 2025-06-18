/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 09:35:41 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/15 09:36:09 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_l;
	unsigned int	src_l;

	dest_l = 0;
	while (dest_l < size && dest[dest_l] != '\0')
		dest_l++;
	src_l = 0;
	while (src[src_l] != '\0')
		src_l++;
	if (dest_l == size)
		return (size + src_l);
	i = 0;
	while (src[i] != '\0' && dest_l + i < size - 1)
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	if (dest_l + i < size)
		dest[dest_l + i] = '\0';
	return (dest_l + src_l);
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
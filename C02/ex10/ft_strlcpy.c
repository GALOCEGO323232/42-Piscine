/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 15:05:48 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/09 10:03:58 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
int main(void)
{
	char	dest[20];
	char	src[] = "Exemplo ";
	unsigned int ret;

	ret = ft_strlcpy(dest, src, 3);
	printf("Destino: %s\n", dest);
	printf("Origem: %u\n", ret);
	return (0);
}
*/

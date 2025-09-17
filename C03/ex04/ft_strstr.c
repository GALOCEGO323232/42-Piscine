/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:34:44 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/15 09:35:33 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*str[] = "Hello, world!";
	char	*to_find[] = "world";
	char	*result;

	result = ft_strstr(str, to_find);
	if (result != 0)
		printf("Substring encontrada: %s\n", result);
	else
		printf("Substring nao encontrada.\n");
	return (0);
}
*/
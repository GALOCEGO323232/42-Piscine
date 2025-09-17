/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:35:41 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:37:10 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str1[] = "HELlo WORLD!";
	char	str2[] = "123ABcPoO";
	char	str3[] = "";
	char	str4[] = "PaPANaMeRicaNo";
	char	str5[] = "CAMPus 42";

	printf("Before: %s\n", str1);
	ft_strlowcase(str1);
	printf("After : %s\n\n", str1);

	printf("Before: %s\n", str2);
	ft_strlowcase(str2);
	printf("After : %s\n\n", str2);

	printf("Before: \"%s\"\n", str3);
	ft_strlowcase(str3);
	printf("After : \"%s\"\n\n", str3);

	printf("Before: %s\n", str4);
	ft_strlowcase(str4);
	printf("After : %s\n\n", str4);

	printf("Before: %s\n", str5);
	ft_strlowcase(str5);
	printf("After : %s\n\n", str5);

	return (0);
}
*/

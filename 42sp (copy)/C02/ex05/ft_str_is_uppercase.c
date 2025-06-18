/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:43:56 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:43:58 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	*test1 = "HelloWorld";
	char	*test2 = "Hello123";
	char	*test3 = "";
	char	*test4 = "HELLO";
	char	*test5 = "HELLOWORLD";
	char	*test6 = "ABDJUF!";
	char	*test7 = "!ADCDAadw";

	printf("Test 1: %d\n", ft_str_is_uppercase(test1));
	printf("Test 2: %d\n", ft_str_is_uppercase(test2));
	printf("Test 3: %d\n", ft_str_is_uppercase(test3));
	printf("Test 4: %d\n", ft_str_is_uppercase(test4));
	printf("Test 5: %d\n", ft_str_is_uppercase(test5));
	printf("Test 6: %d\n", ft_str_is_uppercase(test6));
	printf("Test 7: %d\n", ft_str_is_uppercase(test7));
	return (0);
}
*/

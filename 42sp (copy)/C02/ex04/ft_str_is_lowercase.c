/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:40:29 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:40:33 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	*test5 = "xjdidjksl";
	char	*test6 = "abcpgogr";
	char	*test7 = "xjdidjksl";

	printf("Test 1: %d\n", ft_str_is_lowercase(test1));
	printf("Test 2: %d\n", ft_str_is_lowercase(test2));
	printf("Test 3: %d\n", ft_str_is_lowercase(test3));
	printf("Test 4: %d\n", ft_str_is_lowercase(test4));
	printf("Test 5: %d\n", ft_str_is_lowercase(test5));
	printf("Test 6: %d\n", ft_str_is_lowercase(test6));
	printf("Test 7: %d\n", ft_str_is_lowercase(test7));
	return (0);
}
*/

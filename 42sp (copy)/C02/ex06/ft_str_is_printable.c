/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:39:29 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/08 14:53:48 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	*test2 = "1234567890";
	char	*test3 = "";
	char	test4[] = "Hello\nWorld";
	char	test5[] = "Hello\tWorld";
	char	test6[] = "Space and ~Symbols!";
	char	test7[] = {65, 66, 7, 67, 0};

	printf("Test 1: %d\n", ft_str_is_printable(test1));
	printf("Test 2: %d\n", ft_str_is_printable(test2));
	printf("Test 3: %d\n", ft_str_is_printable(test3));
	printf("Test 4: %d\n", ft_str_is_printable(test4));
	printf("Test 5: %d\n", ft_str_is_printable(test5));
	printf("Test 6: %d\n", ft_str_is_printable(test6));
	printf("Test 7: %d\n", ft_str_is_printable(test7));

	return (0);
}
*/

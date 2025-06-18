/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:41:28 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:41:30 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	char	*test5 = "abcXYZ";
	char	*test6 = "Test!";

	printf("Test 1: %d\n", ft_str_is_alpha(test1));
	printf("Test 2: %d\n", ft_str_is_alpha(test2));
	printf("Test 3: %d\n", ft_str_is_alpha(test3));
	printf("Test 4: %d\n", ft_str_is_alpha(test4));
	printf("Test 5: %d\n", ft_str_is_alpha(test5));
	printf("Test 6: %d\n", ft_str_is_alpha(test6));
	return (0);
}
*/

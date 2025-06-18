/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:41:10 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:41:11 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	*test2 = "HELLO";
	char	*test3 = "";
	char	*test4 = "1234523";
	char	*test5 = "021983a";
	char	*test6 = "124633!";

	printf("Test 1: %d\n", ft_str_is_numeric(test1));
	printf("Test 2: %d\n", ft_str_is_numeric(test2));
	printf("Test 3: %d\n", ft_str_is_numeric(test3));
	printf("Test 4: %d\n", ft_str_is_numeric(test4));
	printf("Test 5: %d\n", ft_str_is_numeric(test5));
	printf("Test 6: %d\n", ft_str_is_numeric(test6));
	return (0);
}
*/

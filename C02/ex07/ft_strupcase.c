/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:38:52 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/07 19:38:55 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str1[] = "hello world!";
	char	str2[] = "123abcPOO";
	char	str3[] = "";
	char	str4[] = "PapaNaMEriCAno";
	char	str5[] = "caMpus 42";

	printf("Before: %s\n", str1);
	ft_strupcase(str1);
	printf("After : %s\n\n", str1);

	printf("Before: %s\n", str2);
	ft_strupcase(str2);
	printf("After : %s\n\n", str2);

	printf("Before: \"%s\"\n", str3);
	ft_strupcase(str3);
	printf("After : \"%s\"\n\n", str3);

	printf("Before: %s\n", str4);
	ft_strupcase(str4);
	printf("After : %s\n\n", str4);

	printf("Before: %s\n", str5);
	ft_strupcase(str5);
	printf("After : %s\n\n", str5);

	return (0);
}
*/

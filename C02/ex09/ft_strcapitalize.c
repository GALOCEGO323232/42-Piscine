/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:50:18 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/12 13:15:51 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i[2];

	i[0] = 0;
	i[1] = 1;
	while (str[i[0]])
	{
		if (str[i[0]] >= 'a' && str[i[0]] <= 'z')
		{	
			if (i[1])
				str[i[0]] -= 32;
			i[1] = 0;
		}
		else if (str[i[0]] >= 'A' && str[i[0]] <= 'Z')
		{
			if (!i[1])
				str[i[0]] += 32;
			i[1] = 0;
		}
		else if (str[i[0]] >= '0' && str[i[0]] <= '9')
				i[1] = 0;
		else
			i[1] = 1;
		i[0]++;
	}
	return (str);
}

/*
int	main(void)
{
	char	string[] = "oi, tudo bem? 42palavras quarenTa-e-duas; cinquenta+e+um";

	ft_strcapitalize(string);
	printf("%s\n", string);
	return (0);
}
*/

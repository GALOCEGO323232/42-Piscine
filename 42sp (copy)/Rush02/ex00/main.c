/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:24:32 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/15 17:16:12 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	*filename;

	if (argc != 2 && argc != 3)
	{
		ft_msg_error();
		return (1);
	}
	if (argc == 2 && !is_numeric(argv[1]))
	{
		ft_msg_error();
		return (1);
	}
	if (argc == 3 && !is_numeric(argv[2]))
	{
		ft_msg_error();
		return (1);
	}
	filename = ft_dict_file(argc, argv);
	if (!ft_check_dict(filename))
	{
		ft_msg_dict_error();
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:58:29 by kgagliar          #+#    #+#             */
/*   Updated: 2025/06/15 17:19:32 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		is_numeric(char *str);
void	ft_msg_error(void);
void	ft_msg_dict_error(void);
char	*ft_dict_file(int argc, char **argv);
int		ft_check_dict(char *filename);

#endif

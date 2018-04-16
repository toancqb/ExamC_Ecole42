/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:44:07 by qtran             #+#    #+#             */
/*   Updated: 2018/04/16 16:51:53 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;	
	}
}

void	print_usage()
{
	ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
}

void	print_error()
{
	ft_putstr("Invalid Option\n");
}



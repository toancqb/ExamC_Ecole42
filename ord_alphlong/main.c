/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 14:51:23 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 16:59:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_header.h"

int		main(int argc, char *argv[])
{
	char **cf;

	if (argc == 2)
	{
		cf = ft_create(argv[1]);
		cf = ft_fill_tab(argv[1], cf);
		cf = ft_split(argv[1], cf);
		cf = sort_len(cf);
		cf = sort_alpha(cf);
		ft_print(cf);
		ft_putstr("\n");
	}
	else
		write(1, "\n", 1);
	return (0);
}

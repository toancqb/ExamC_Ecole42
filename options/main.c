/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:41:56 by qtran             #+#    #+#             */
/*   Updated: 2018/04/16 17:12:15 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		main(int argc, char *argv[])
{
	int tab[32];
	int i;
	int j;
	int k;

	i = 1;
	k = 1;
	j = 0;
	if (argc >= 2)
	{
		ft_init_tab(tab, 32);
		while (i < argc)
		{
			k = is_valid(argv[i]);
			if (k == 0)
			{
				print_error();
				return (0);
			}
			else if (k == 2)
			{
				print_usage();
				return (0);
			}
		j = 1;
		while (argv[i][j] != '\0')
			ft_active(tab, argv[i][j++]);
		i++;
		}
		ft_print_res(tab, 32);
	}
	else
		print_usage();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 10:50:01 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 12:02:37 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		main(int argc, char *argv[])
{
	char	**tab;
	int		i = 0;
	int		k;
	int		j;

	if (argc == 2)
	{
		st_init();
		tab = ft_strsplit(argv[1], ' ');
		while (tab[i] != 0)
		{
			k = classification(tab[i]);
			if (k == 1)
				push(atoi(tab[i]));
			else if (k == 2)
			{
				if (nb_elem() >= 2)
				{
					j = pop();
					if ((tab[i][0] == '/' || tab[i][0] == '%') && j == 0)
					{
						printf("Error\n");
						return (0);
					}
					push(ft_op(tab[i][0], pop(), j));
				}
				else
				{
					printf("Error\n");
					return (0);
				}
			}
			else if (k == 0)
			{
				printf("Error\n");
				return (0);
			}	
			i++;
		}
		if (nb_elem() == 1)
			printf("%d\n", pop());
		else
			printf("Error\n");
	}
	else
		printf("Error\n");
	return (0);
}

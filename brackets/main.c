/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:13:18 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 13:01:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_check_brackets(char *str)
{
	int i;
	int tab[100];

	st_init(tab, 100);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			st_push(tab, (int)str[i]);
			i++;
			continue ;
		}
		if ((str[i] == ')' && st_pop(tab) != 40) ||
				(str[i] == ']' && st_pop(tab) != 91)
				|| (str[i] == '}' && st_pop(tab) != 123))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc >= 2)
	{
		i = 1;
		while (argv[i] != 0)
		{
			if (check(argv[i], '(', ')') && check(argv[i], '[', ']')
					&& check(argv[i], '{', '}') && ft_check_brackets(argv[i]))
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
			i++;
		}	
	}
	else
		write(1, "\n", 1);
	return (0);
}

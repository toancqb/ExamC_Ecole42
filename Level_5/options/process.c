/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:46:52 by qtran             #+#    #+#             */
/*   Updated: 2018/04/16 18:14:25 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"


int		is_valid(char *str)
{
	int i;
	int	c;

	c = 0;
	if (str[0] == '-')
	{
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] == 'h')
				c = 1;
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
			i++;
		}
		if (c == 1)
			return (2);
		return (1);
	}
	else if (str[0] != '-')
	{
		return (3);
	}
	return (1);
}

/*
int		is_valid(char *str)
{
	int i;
	int c;

	c = 0;
	if (str[0] == '-')
}*/

void	ft_init_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
}

void	ft_active(int *tab, char c)
{
	tab[31 - ((int)c - 'a')] = 1;
}

void	ft_print_res(int *tab, int n)
{
	int i;
	int c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		if (i == 7 || i == 15 || i == 23)
			write(1, " ", 1);
		i++;	
	}
	write(1, "\n", 1);
}

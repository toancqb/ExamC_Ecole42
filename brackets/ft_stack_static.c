/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_static.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:51:02 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 12:58:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	st_init(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
}

void	st_push(int *tab, int v)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		i++;
	}
	tab[i] = v;	
}

int		st_pop(int *tab)
{
	int i;
	int j;

	if (tab[0] == 0)
		return (0);
	if (tab[0] != 0 && tab[1] == 0)
	{
		j = tab[0];
		tab[0] = 0;
		return (j);
	}
	else
	{
		i = 0;
		while (tab[i] != 0)
		{
			i++;
		}
		j = tab[i - 1];
		tab[i - 1] = 0;
		return (j);
	}
	return (0);
}

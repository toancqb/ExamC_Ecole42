/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:42:05 by exam              #+#    #+#             */
/*   Updated: 2018/04/13 12:32:41 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		nbr(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int		ft_valid(char	**tab)
{
	int i;

	while (tab[i] != NULL)
	{
		if (atoi(tab[i]) != ft_strlen(tab[i]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_rpn_cal(char	**tab, int *n)
{
	int i;
	int x;
	int y;

	if (ft_valid(tab) == 0)
		return (0);
	i = 0;
	while (tab[i] != NULL)
	{
		if (tab[i][0] == '+')
		{
			x = pop();
			push(pop() + x);			
		}
		else if (tab[i][0] == '-')
		{
			x = pop();
			push(pop() - x);
		}
		else if (tab[i][0] == '*')
		{
			x = pop();
			push(pop() * x);
		}
		else if (tab[i][0] == '/')
		{
			x = pop();
			push(pop() / x);
		}
		else if (tab[i][0] == '%')
		{
			x = pop();
			push(pop() % x);
		}
		else
			push(atoi(tab[i]));
		i++;
	}
	n = NULL;
	if (nbr_elem() != 1)
		return (0);
	*n = pop();
	return (1);
}







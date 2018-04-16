/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:14:07 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 12:30:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	t_point p;
	int		n;

	stack_init();
	push(begin);
	n = tab[begin.y][begin.x];
	while (isEmpty() == 0)
	{
		p = pop();
		if (p.y + 1 <= size.y - 1 && tab[p.y + 1][p.x] == n)
			push(p.y + 1, p.x);
		if (p.y - 1 >= 0 && tab[p.y - 1][p.x] == n)
			push(p.y - 1, p.x);
		if (p.x + 1 <= size.x - 1 && tab[p.y][p.x + 1] == n)
			push(p.y, p.x + 1);
		if (p.x - 1 >= 0 && tab[p.y][p.x - 1] == n)
			push(p.y, p.x - 1);
		tab[p.y][p.x] = 'F';
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:03:11 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 12:31:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

t_point		*st;
int			index;

void		stack_init(void)
{
	st = (t_point*)malloc(sizeof(t_point) * 1000);
	index = -1;
}

void		push(int y, int x)
{
	t_point t;

	t.y = y;
	t.x = x;
	st[++index]	= t;
}

t_point		pop(void)
{
	if (index < 0)
		return (-1);
	index--;
	return (st[index + 1]);
}

int			isEmpty(void)
{
	return (index == -1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:47:58 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 12:50:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	*st;
int	index;

void	stack_init(void)
{
	st = (int*)malloc(sizeof(int) * 1000);
	index = -1;
}

void	push(int value)
{
	st[++index] = value;
}

int		pop(void)
{
	if (index == -1)
		return (-1);
	index--;
	return (st[index + 1]);
}

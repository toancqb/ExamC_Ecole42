/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:55:19 by exam              #+#    #+#             */
/*   Updated: 2018/04/13 12:23:36 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int st[1000];
int dex;

void	init_stack()
{
	dex = -1;
}

void	push(int value)
{
	st[++dex] = value;
}

int		pop()
{
	if (dex != -1)
	{
		dex--;
		return (st[dex + 1]);
	}
	return (-1);
}

int		nbr_elem()
{
	return (dex + 1);
}

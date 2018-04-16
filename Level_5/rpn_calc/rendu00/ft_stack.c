/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:30:15 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 12:07:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

t_stack	*init_elem(int n)
{
	t_stack	*t;

	if (!(t = (t_stack*)malloc(sizeof(t_stack))))
		return (0);
	t->v = n;
	t->next = 0;
	return (t);
}

int		st_num_elem(t_stack **st)
{
	t_stack *tmp;
	int		count;

	if (*st == 0)
		return (0);
	else if (*st != 0 && (*st)->next == 0)
		return (1);
	else
	{
		count = 0;
		tmp = *st;
		while (tmp->next != 0)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}

void	st_push(t_stack **st, int n)
{
	t_stack	*tmp;
	t_stack	*k;

	if (*st == 0)
	{
		*st = init_elem(n);
	}
	else
	{
		tmp = *st;
		while(tmp->next != 0)
		{
			tmp = tmp->next;
		}
		k = init_elem(n);
		tmp->next = k;	
	}
}

int		st_pop(t_stack **st)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		i;

	i = -9999999;
	if (*st != 0 && (*st)->next != 0)
	{
		tmp = (*st)->next;
		tmp2 = *st;
		while (tmp->next != 0)
		{
			tmp = tmp->next;
			tmp2 = tmp2->next;
		}
		i = tmp->v;
		tmp = 0;
		tmp2->next = 0;		
	}
	else if (*st != 0 && (*st)->next == 0)
	{
		i = (*st)->v;
		*st = 0;
	}
	return (i);
}

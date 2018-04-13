/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:26:59 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 12:07:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_cal(int x, int y, char *str)
{
	if (str[0] == '+')
		return (y + x);
	if (str[0] == '-')
		return (y - x);
	if (str[0] == '*')
		return (y * x);
	if (str[0] == '/')
		return (y / x);
	if (str[0] == '%')
		return (y % x);
	return (0);
}

int		main(int argc, char *argv[])
{
	t_stack	*stack;
	char	**tab;
	int		i;
	int		res;

	i = 0;
	res = 0;
	stack = 0;
	if (argc == 2)
	{
		tab = ft_split(argv[1]);
		while (tab[i] != 0)
		{
			if (classification(tab[i]) == 1)
				st_push(&stack, atoi(tab[i]));
			else
			{
				st_push(&stack, ft_cal(st_pop(&stack), st_pop(&stack), tab[i]));	
			}
			i++;
		}
		if (st_num_elem(&stack) == 1)
			printf("%d\n", st_pop(&stack));
		else
			printf("Error\n");
	}
	else
		printf("Error\n");
	return (0);
}

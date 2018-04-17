/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 10:36:41 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 11:13:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		classification(char *str)
{
	int i = 0;

	if ((str[i] == '-' || str[i] == '+') && str[i + 1] != '\0'
			&& str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		while (str[i + 1] != '\0')
		{
			if (str[i + 1] > '9' || str[i + 1] < '0')
				return (0);
			i++;
		}		
		return (1);
	}
	else if (str[i + 1] == '\0'
			&& (str[i] == '+' || str[i] == '-' || str[i] == '*'
				|| str[i] == '/' || str[i] == '%'))
		return (2);
	else if (str[i + 1] != '\0'
			&& (str[i] == '+' || str[i] == '-' || str[i] == '*'
				|| str[i] == '/' || str[i] == '%'))
		return (0);
	else if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (1);
}

int		ft_op(char c, int x, int y)
{
	if (c == '+')
		return (x + y);
	if (c == '-')
		return (x - y);
	if (c == '*')
		return (x * y);
	if (c == '/')
		return (x / y);
	if (c == '%')
		return (x % y);
	return (0);
}
/*
void	ft_process(char *str)
{
	char	**tab;
	int		i = 0;
	int		j;
	int		k;

	tab = ft_strsplit(str);
	while (tab[i] != 0)
	{
		k = classification(tab[i]);
		if (k == 1)
			push(atoi(tab[i]));
		else if (k = 2)
		{

		}
	}

}


*/









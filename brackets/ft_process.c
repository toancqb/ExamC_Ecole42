/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:14:52 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 13:01:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		check(char *str, char c, char d)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			flag++;
		else if (str[i] == d)
			flag--;
		i++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}

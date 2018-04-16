/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:59:13 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 11:14:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

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

int		check(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	char	res[1000];
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	res[k] = '\0';
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (check(argv[1][i], res) != 1 && argv[1][i] == argv[2][j])
				{
					res[k++] = argv[1][i];
					res[k] = '\0';
				}
				j++;
			}
			i++;
		}
		ft_putstr(res);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 13:42:50 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 14:17:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	init_value(int *tab, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		tab[i] = 1;
		i++;
	}
}

int		ft_count(char *str, char c, int *tab)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			count++;
			tab[i] = 0;
		}
		i++;
	}
	return (count);
}

void	cal_tab(char *str, int *tab)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!((str[i] >= 'a' && str[i] <= 'z')
					|| (str[i] >= 'A' && str[i] <= 'Z')))
			tab[i] = 0;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (tab[i])
		{
			tab[i] = ft_count(str, str[i], tab); 	
		}
		i++;
	}
}

void	print_format(char *str, int *tab)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (tab[i])
			flag++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (tab[i] != 0)
		{
			(flag - 1 == 0) ? printf("%d%c\n", tab[i], str[i])
				: printf("%d%c, ", tab[i], str[i]);
			flag--;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int tab[1000];

	init_value(tab, 1000);
	if (argc == 2 && argv[1][0] != '\0')
	{
		cal_tab(argv[1], tab);
		print_format(argv[1], tab);	
	}
	else
		printf("\n");
	return (0);
}

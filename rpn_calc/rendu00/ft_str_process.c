/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:03:33 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 12:08:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	*cut(char *tmp, char *str, int i, int j)
{
	int v;

	if (tmp == 0)
	{
		if (!(tmp = (char*)malloc(sizeof(char) * (j - i + 1))))
			return (0);
		tmp[j - i] = '\0';
		v = 0;
		while (v < j - i)
		{
			tmp[v] = str[v + i];
			v++;
		}
	}
	return (tmp);
}

char	**init_tab(char *str)
{
	char	**tab;
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			count++;
		i++;
	}
	tab = (char**)malloc(sizeof(char*) * (count + 2));
	tab[count + 1] = 0;
	i = 0;
	while (i < count + 1)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = init_tab(str);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != '\0' && str[j] != ' ')
				j++;
			if (j > i)
			{
				tab[k] = cut(tab[k], str, i, j);
				k++;
				i = j;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (tab);
}

int		classification(char *str)
{
	int i;

	i = 0;
	if (str[i] == '+' || str[i] == '-' || str[i] == '*'
			|| str[i] == '/' || str[i] == '%')
		return (2);
	else
		return (1);
}

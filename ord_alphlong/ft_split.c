/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 14:39:00 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 16:59:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_header.h"

char	**ft_create(char *str)
{
	int		i;
	int		w;
	char	**cf;

	i = 0;
	w = 0;
	while (str[i] && SCN(i))
		i++;
	while (str[i] != '\0')
	{
		if (!(SCN(i)) && str[i] != '\0')
		{
			w++;
			while (!(SCN(i)) && str[i] != '\0')
				i++;
		}
		while (SCN(i))
			i++;
	}
	cf = (char**)malloc(sizeof(char*) * (w + 1));
	cf[w] = 0;
	return (cf);
}

char **ft_fill_tab(char *str, char **cf)
{
	int i;
	int x;
	int y;

	y = 0;
	i = 0;
	while (str[i] && (SCN(i)))
		i++;
	while (str[i] != '\0')
	{
		x = 0;
		while (!(SCN(i)) && str[i] != '\0')
		{
			x++;
			i++;
		}
		if (SCN(i))
		{
			while (SCN(i))
				i++;
		}
		cf[y] = (char*)malloc(sizeof(char) * (x + 1));
		cf[y++][x] = '\0';
	}
	return (cf);
}

char **ft_split(char *str, char **cf)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (str[i] && (SCN(i)))
		i++;
	while (str[i] != '\0')
	{
		k = 0;
		while (!(SCN(i)) && str[i] != '\0')
		{
			cf[j][k] = str[i++];
			k++;
		}
		if (SCN(i) || str[i] == '\0')
		{
			cf[j++][k] = '\0';
			while (SCN(i))
				i++;
		}
	}
	return (cf);
}

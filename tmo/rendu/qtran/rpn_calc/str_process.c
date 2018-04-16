/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:55:32 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 13:27:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		isValid(char *str)
{
	int i;
	int c;

	if (str[0] == ' ' || str[ft_strlen(str) - 1] == ' ')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (i >= 1 && str[i] != '\0')
		{
			if (str[i] == ' ' && str[i - 1] == ' ')
			return (0);	
		}
		i++;
	}
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			c++;
		i++;
	}
	return (c);
}

char	*cp_until(char *str, char c, int *i)
{
	char	*t;
	int		j;

	*i = 0;
	while (str[*i] != '\0')
	{
		if (str[*i] == c)
			break ;
		(*i)++;
	}
	if (str[*i] == '\0')
	{
		t = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
		t[ft_strlen(str)] = '\0';
		j = 0;
		while (str[j] != '\0')
		{
			t[j] = str[j];
			j++;
		}
		return (t);
	}
	j = 0;
	t = (char*)malloc(sizeof(char) * (*i + 1));
	t[*i] = '\0';
	while (j < *i)
	{
		t[j] = str[j];
		j++;
	}
	return (t);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		len;
	int		i;
	int		n;
	int		k;

	len = isValid(str);
	if (len == 0)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (len + 2));
	tab[len + 1] = NULL;
	i = 0;
	k = 0;
	while (i <= len && tab[i] != NULL)
	{
		k = 0;
		while (str[k] != '\0')
		{
			if (str[k] == ' ')
				break ;
			k++;
		}
		if (str[k] == '\0')
			break ;
		tab[i] = cp_until(str, ' ', &n);
		str += n + 1;
	}
	return (tab);
}

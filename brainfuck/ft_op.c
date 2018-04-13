/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:41:52 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 13:39:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_header.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*init_tab(int len)
{
	int i;
	char *s;

	i = 0;
	s = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		s[i] = 0;
		i++;
	}
	s[i] = '\0';
	return (s);
}

void	ft_op_af(char *str, int *i, char *s, int *k)
{
	if (str[*i] == '+')
		s[*k]++;
	else if (str[*i] == '-')
		s[*k]--;
	else if (str[*i] == '>')
		(*k)++;
	else if (str[*i] == '<')
		(*k)--;
	else if (str[*i] == '.')
		write(1, &s[*k], 1);
}

void	ft_loop_open(char *str, int *i, char *s, int *k)
{
	int flag;

	flag = 0;
	if (str[*i] == '[' && s[*k] == 0)
	{
		while (str[*i] != ']')
		{
			if (str[*i] == '[')
				flag++;
			(*i)++;
			if (str[*i] == ']')
			{
				if (flag == 1)
					break ;
				else
					flag--;
				(*i)++;
			}
		}
	}
}

void	ft_loop_close(char *str, int *i, char *s, int *k)
{
	int flag;

	flag = 0;
	if (str[*i] == ']' && s[*k] != 0)
	{
		while (*i >= 0 && str[*i] != '[')
		{
			if (str[*i] == ']')
				flag++;
			(*i)--;
			if (str[*i] == '[')
			{
				if (flag == 1)
					break ;
				else
					flag--;
				(*i)--;
			}
		}
	}
}

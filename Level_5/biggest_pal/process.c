/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:17:25 by exam              #+#    #+#             */
/*   Updated: 2018/04/17 11:32:30 by exam             ###   ########.fr       */
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

void	ft_putstr(char *str, int i, int j)
{
	while (str[i] != '\0' && i <= j)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		is_pal(char *str, int begin, int end)
{
	if (begin > end)
		return (0);
	if (begin == end)
		return (1);
	while (begin < end)
	{
		if (str[begin] != str[end])
			return (0);
		begin++;
		end--;
	}
	return (1);
}

void	ft_process(char *str)
{
	int		i = 0;
	int		j;
	t_res	res;
	
	res.begin = 0;
	res.end = 0;
	res.check = 0;
	if (is_pal(str, 0, ft_strlen(str) - 1) == 1)
	{
		ft_putstr(str, 0, ft_strlen(str) - 1);
		write(1, "\n", 1);
	}
	else
	{
		while (str[i] != '\0')
		{
			j = i + 1;
			while (str[j] != '\0')
			{
				if (is_pal(str, i, j) == 1 && j - i >= res.end - res.begin)
				{
					res.begin = i;
					res.end = j;
					res.check = 1;	
				}
				j++;
			}
			i++;
		}
		if (res.check == 0)
			write(1, &str[ft_strlen(str) - 1], 1);
		else
			ft_putstr(str, res.begin, res.end);
		write(1, "\n", 1);
	}
}

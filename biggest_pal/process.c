/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:09:34 by exam              #+#    #+#             */
/*   Updated: 2018/04/12 18:38:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_putstr(char *str,int i,int j)
{
	while (str[i] != '\0' && i <= j)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		is_pal(char *str,int begin,int end)
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

void		biggest_pal(char *str)
{
	int		i;
	int		j;
	t_res	res;

	res.begin = 0;
	res.end = 0;
	res.check = 0;
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (is_pal(str, i, j) == 1 &&
					j - i >= res.end - res.begin)
			{
				res.begin = i;
				res.end = j;
				res.check = 1;
			}
			j++;
		}
		i++;
	}
	if (res.check)
		ft_putstr(str, res.begin, res.end);
	else
		write(1, &str[ft_strlen(str) - 1], 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:10:44 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:36:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_trans(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (0);
}

int		main(int argc, char *argv[])
{
	char	d;
	int		i;
	int		rep;
	int		flag;

	flag = 0;
	d = '\n';
	i = 0;
	rep = 0;
	if (argc == 2 && argv[1][i] != '\0')
	{
		while (argv[1][i] != '\0')
		{
			flag = ft_trans(argv[1][i]);
			if (flag == 1 || flag == 2)
			{
				rep = (flag == 1) ? argv[1][i] - 'a' + 1 : argv[1][i] - 'A' + 1;
				while (rep > 0)
				{
					ft_putchar(argv[1][i]);
					rep--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar(d);
	}
	else
		ft_putchar(d);
	return (0);
}

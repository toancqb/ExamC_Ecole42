/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:02:58 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:08:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	d;
	char	c;
	int		i;

	d = '\n';
	i = 1;
	c = 'z';
	while (c >= 'a')
	{
		if (i % 2 == 0)
			ft_putchar(c - 32);
		else
			ft_putchar(c);
		c--;
		i++;
	}
	write(1, &d, 1);
	return (0);
}		

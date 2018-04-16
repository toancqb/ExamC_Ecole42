/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 11:16:24 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 12:07:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi_sp(char *str)
{
	int nb;
	int i;

	nb = 0;
	if (str[0] == '-')
		return (0);
	i = 0;
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

int		ft_prime(int n)
{
	int i;

	if (n < 2)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(long nb)
{
	int		a[100];
	int		i;
	char	d;

	i = 0;
	while (nb != 0)
	{
		a[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		d = a[i] + '0';
		write(1, &d, 1);
		i--;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		n;
	long	sum;

	sum = 0;
	i = 0;
	n = 0;
	if (argc == 2)
	{
		n = ft_atoi_sp(argv[1]);
		if (n >= 2)
		{
			i = 2;
			while (i <= n)
			{
				if (ft_prime(i) == 1)
				{
					sum += i;
				}
				i++;
			}
			ft_putnbr(sum);
		}
		else
			write(1, "0", 1);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}

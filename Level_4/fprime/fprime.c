/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:11:11 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 12:36:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
		i += 2;
	}
	return (1);
}

void	ft_init(int *tab, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		tab[i] = -1;
		i++;
	}
}

void	ft_factor_p(int n)
{
	int i;
	int j;
	int a[100];

	i = 2;
	j = 0;
	ft_init(a, 100);
	while (i <= n)
	{
		if (n % i == 0 && ft_prime(i))
		{
			while (n % i == 0)
			{
				a[j++] = i;
				n = n / i;
			}
		}
		i++;
	}
	i = 0;
	while (a[i] != -1)
	{
		if (a[i + 1] == -1)
			printf("%d\n", a[i]);	
		else
			printf("%d*", a[i]);
		i++;
	}	
}

int		main(int argc, char *argv[])
{
	int n;

	n = 0;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n != 1)
		{
			ft_factor_p(n);
		}
		else
			printf("1\n");
	}
	else
		printf("\n");
	return (0);
}

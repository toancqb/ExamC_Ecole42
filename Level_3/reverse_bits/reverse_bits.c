/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:40:21 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 10:55:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	a[8];

	i = 0;
	while (octet != 0)
	{
		a[i] = octet % 2;
		i++;
		octet = octet / 2;
	}
	i = 0;
	octet = 0;
	while (i < 8)
	{
		octet = octet * 2;
		octet = octet + a[i];
		i++;
	}
	return (octet);
}

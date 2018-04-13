/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:14:06 by exam              #+#    #+#             */
/*   Updated: 2017/11/14 13:02:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_LIB_H
# define _FT_LIB_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check(char *str, char c, char d);
void	st_init(int *tab, int n);
void	st_push(int *tab, int v);
int		st_pop(int *tab);
#endif

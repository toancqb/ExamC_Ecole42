/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:02:25 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 12:31:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include "t_point.h"

void	stack_init(void);
void	push(int y, int x);
t_point	pop(void);
int		isEmpty(void);
void	flood_fill(char	**tab, t_point size, t_point begin);

#endif

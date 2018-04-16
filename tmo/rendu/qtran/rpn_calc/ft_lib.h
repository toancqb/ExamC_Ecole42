/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:47:04 by exam              #+#    #+#             */
/*   Updated: 2018/04/10 12:56:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdio.h>
# include <stdlib.h>

void	stack_init(void);
void	push(int value);
int		pop(void);
char	**ft_split(char *str);

#endif

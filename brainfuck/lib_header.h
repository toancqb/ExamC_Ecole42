/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:40:25 by exam              #+#    #+#             */
/*   Updated: 2017/07/28 13:39:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIB_HEADER_H
# define _LIB_HEADER_H

# include <unistd.h>
# include <stdlib.h>

char	*init_tab(int len);

int		ft_strlen(char *str);

void	ft_op_af(char *str, int *i, char *s, int *k);

void	ft_loop_open(char *str, int *i, char *s, int *k);

void	ft_loop_close(char *str, int *i, char *s, int *k);

#endif

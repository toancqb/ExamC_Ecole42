/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:43:11 by qtran             #+#    #+#             */
/*   Updated: 2018/04/16 17:11:15 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <unistd.h>

void	print_usage();
void	print_error();
int		is_valid(char *str);
void	ft_init_tab(int *tab, int n);
void	ft_active(int *tab, char c);
void	ft_print_res(int *tab, int n);

#endif

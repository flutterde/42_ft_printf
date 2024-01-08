/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:23:59 by ochouati          #+#    #+#             */
/*   Updated: 2024/01/06 15:32:15 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>

typedef unsigned int	t_unint;

int		ft_printf(const char *str, ...);
int		_ft_puchar(char c);
int		_ft_pustr(char *str);
int		_ft_putbnr(int nb);
int		_ft_hexa(unsigned int nb, char c);
int		_ft_print_adrs(void *adrs);
int		_ft_print_u(t_unint nb);
int		ftp_sp_sn(char c, int nbr);
int		h_hashtag(t_unint nb, char c);
int		__bonus(char c, char c2, va_list ap);
bool	_is_dg(char c1, char c2);
bool	_is_hx(char c1, char c2);
bool	_is_ss(char c1, char c2);
bool	_is_speci_format(char c1, char c2);

#endif
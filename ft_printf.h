/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:09:59 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/17 15:07:55 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "42_Libft/libft.h"

int		ft_printf(const char *s, ...);

int		ft_printf_s(char *s);

int		ft_printf_d(int n, char *base);

int		ft_printf_u(unsigned int n, char *base);

int		ft_printf_p(unsigned long n, char *base);

int		ft_printf_x(unsigned long n, char *base);

int		ft_print_arg(char c, va_list arg);

#endif
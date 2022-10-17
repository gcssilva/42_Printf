/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:54:29 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/17 15:04:19 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(char c, va_list arg)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(arg, int), 1);
		return (1);
	}
	if (c == 's')
		return (ft_printf_s(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_printf_p(va_arg(arg, long int), "0123456789abcdef"));
	else if (c == 'd' || c == 'i')
		return (ft_printf_d(va_arg(arg, int), "0123456789"));
	else if (c == 'u')
		return (ft_printf_u(va_arg(arg, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_printf_x(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_printf_x(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_printf_s("%"));
}

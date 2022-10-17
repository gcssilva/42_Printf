/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:58:46 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/17 12:01:02 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		printed;
	va_list	arg;

	i = -1;
	printed = 0;
	va_start(arg, s);
	while (s[++i])
	{
		if (s[i] == '%')
			printed += ft_print_arg(s[++i], arg);
		else
		{
			ft_putchar_fd(s[i], 1);
			printed++;
		}
	}
	va_end(arg);
	return (printed);
}

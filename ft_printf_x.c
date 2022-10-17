/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:16:11 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/17 15:08:13 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned long n, char *base)
{
	int	printed;

	printed = 0;
	if (n / 16 > 0)
		printed += (ft_printf_x((n / 16), base));
	ft_putchar_fd(base[n % 16], 1);
	printed++;
	return (printed);
}

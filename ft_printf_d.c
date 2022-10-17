/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:15 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/17 14:51:32 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int n, char *base)
{
	int	printed;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	printed = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		printed++;
		n = -n;
	}
	if (n / 10 > 0)
		printed += (ft_printf_d((n / 10), base));
	ft_putchar_fd(base[n % 10], 1);
	printed++;
	return (printed);
}

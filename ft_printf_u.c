/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:52:20 by gsilva            #+#    #+#             */
/*   Updated: 2022/10/17 14:38:02 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n, char *base)
{
	int	printed;

	printed = 0;
	if (n / 10 > 0)
		printed += (ft_printf_u((n / 10), base));
	ft_putchar_fd(base[n % 10], 1);
	printed++;
	return (printed);
}

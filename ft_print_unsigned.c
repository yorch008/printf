/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:18:45 by johernan          #+#    #+#             */
/*   Updated: 2023/11/14 00:18:48 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *count)
{
	if (n < 0)
	{
		n = n * -1;
		n = 4294967295 - (n - 1);
	}
	else if (n > 9)
	{
		ft_print_unsigned (n / 10, count);
		ft_print_unsigned (n % 10, count);
	}
	else
	{
		ft_putchar(n + '0', count);
	}
}

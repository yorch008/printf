/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:21:55 by johernan          #+#    #+#             */
/*   Updated: 2023/11/14 19:21:56 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa_lower2(unsigned long int n, int *count)
{
	char	*hexdigits;

	hexdigits = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_hexa_lower2(n / 16, count);
	}
	ft_putchar(hexdigits[n % 16], count);
}

void	ft_print_pointer(unsigned long int n, int *count)
{
	ft_putstr("0x", count);
	if (n == 0)
		ft_putchar('0', count);
	else
		ft_print_hexa_lower2(n, count);
}

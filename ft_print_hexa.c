/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:08:20 by johernan          #+#    #+#             */
/*   Updated: 2023/11/14 01:08:22 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa_lower(unsigned int n, int *count)
{
	char	*hexdigits;

	hexdigits = "0123456789abcdef";
	if (n >= 16)
	{
		ft_print_hexa_lower(n / 16, count);
	}
	ft_putchar(hexdigits[n % 16], count);
}

void	ft_print_hexa_upper(unsigned int n, int *count)
{
	char	*hexdigits;

	hexdigits = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_print_hexa_upper(n / 16, count);
	}
	ft_putchar(hexdigits[n % 16], count);
}

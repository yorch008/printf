/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 00:41:56 by johernan          #+#    #+#             */
/*   Updated: 2023/10/12 00:41:58 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putchar ('-', count);
		ft_putchar ('2', count);
		ft_putnbr (147483648, count);
	}
	else if (n < 0)
	{
		ft_putchar('-', count);
		n = n * -1;
		ft_putnbr (n, count);
	}
	else if (n > 9)
	{
		ft_putnbr (n / 10, count);
		ft_putnbr (n % 10, count);
	}
	else
	{
		ft_putchar(n + '0', count);
	}
}

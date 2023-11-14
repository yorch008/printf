/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:43:47 by johernan          #+#    #+#             */
/*   Updated: 2023/09/19 19:43:49 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found(char c, va_list args, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x')
		ft_print_hexa_lower(va_arg(args, unsigned int), count);
	else if (c == 'X')
		ft_print_hexa_upper(va_arg(args, unsigned int), count);
	else if (c == 'p')
		ft_print_pointer(va_arg(args, unsigned long int), count);
	else if (c == '%')
		ft_putchar('%', count);
	return (*count);
}

int	ft_printf(char const *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_found(format[i + 1], args, &count);
			i++;
		}
		else
		{
			ft_putchar(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
//     int i;
//     // char c[] = "HOLA ME LLA";
//     unsigned int c = 10;

//     i = printf("real: %x -->", c);
//     printf("%d\n", i);
//     i = ft_printf("mioo: %x -->", c);
//     printf("%d\n", i);
//     return (0);
// }
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

int ft_found (char c, va_list args, int *count)
{
    if(c == 'c')
        ft_putchar(va_arg(args, int), count);
    else if(c == 's')
        ft_putstr(va_arg(args, char *), count);
    // else if(c == 'p')
    else if(c == 'd' || c == 'i')
        ft_putstr(va_arg(args, int), count);
    // else if(c == 'u')
    // else if(c == 'x')
    // else if(c == 'X')
    else if(c == '%')
        ft_putchar('%', count);
    return (*count);

}

int ft_printf(char const *format, ...)
{
    va_list args;
    va_start(args, format);

    int i;
    int count;

    count = 0;
    i = 0;
    while(format[i])
    {
        if(format[i] == '%')
        {
            ft_found(format[i + 1], args, &count);
            i++;
            
        }
        else
        {
            ft_putchar(format[i], &count);
            count++;
        } 
        i++;
    }
    
    va_end(args);
    
    return (count);
}

int main(void)
{
    int i;
    char c[] = "HOLA ME LLA";

    i = ft_printf("mioo: %s", c);
    printf("%d\n", i);
    i = printf("real: %s", c);
    printf("%d\n", i);

    return (0);
}
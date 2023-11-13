/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:07:07 by johernan          #+#    #+#             */
/*   Updated: 2023/10/11 22:07:09 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h> 
# include <unistd.h>

int		ft_printf(const char *input, ...);
void    ft_putchar(char c, int *len);
void    ft_putstr(char *str, int *count);

#endif


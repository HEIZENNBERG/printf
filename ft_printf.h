/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onajem <onajem@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:18:56 by onajem            #+#    #+#             */
/*   Updated: 2024/11/16 20:36:48 by onajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <libc.h>
#include <stdarg.h>

void	putstr(char *str, int *count);
void    print_char(int c, int *count);
void	ft_putnbr_base(long long nb, char *base, int bs ,int *count);
void	hex_putnbr(unsigned long long nb, int *count);
int     ft_printf  (const char *str, ...);

#endif
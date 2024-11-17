/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onajem <onajem@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:11:47 by onajem            #+#    #+#             */
/*   Updated: 2024/11/17 15:57:45 by onajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_var(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		print_char(va_arg(ap, int), &count);
	else if (c == 's')
		putstr(va_arg(ap, char *), &count);
	else if (c == 'd' || c == 'i')
		ft_putnbr_base(va_arg(ap, int), "0123456789", 10, &count);
	else if (c == 'p')
		(putstr("0x", &count), hex_putnbr((unsigned long long)va_arg(ap, \
		void *), &count));
	else if (c == 'u')
		ft_putnbr_base((long long)va_arg(ap, unsigned int), "0123456789", \
		10, &count);
	else if (c == 'x')
		ft_putnbr_base((long long)va_arg(ap, unsigned int), \
		"0123456789abcdef", 16, &count);
	else if (c == 'X')
		ft_putnbr_base((long long)va_arg(ap, unsigned int), \
		"0123456789ABCDEF", 16, &count);
	else if (c == '%')
		print_char('%', &count);
	else 
		return (-1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	if (!str)
		return (0);
	count = 0;
	va_start(ap, str);
	if (!str)
		return (-1);
	while (*str != '\0' && count != -1)
	{
		if (*str == '%')
			count += print_var(*(++str), ap);
		else
			print_char(*str, &count);
		str++;
	}
	va_end(ap);
	return (count);
}

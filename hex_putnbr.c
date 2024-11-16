/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onajem <onajem@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:13:13 by onajem            #+#    #+#             */
/*   Updated: 2024/11/16 20:41:33 by onajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_putnbr(unsigned long long nb, int *count)
{
	char *base;

	base = "0123456789abcdef";
	if (nb < 16)
		print_char(base[nb], count);
	else
	{
		hex_putnbr(nb / 16, count);
		hex_putnbr(nb % 16, count);
	}
}
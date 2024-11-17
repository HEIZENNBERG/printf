/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onajem <onajem@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:13:13 by onajem            #+#    #+#             */
/*   Updated: 2024/11/17 17:00:18 by onajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_putnbr(unsigned long long nb, int *count)
{
	char	*base;

	if (*count != -1)
	{
		base = "0123456789abcdef";
		if (nb < 16)
			print_char(base[nb], count);
		else
		{
			hex_putnbr(nb / 16, count);
			hex_putnbr(nb % 16, count);
		}
	}
}

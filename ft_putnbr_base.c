/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onajem <onajem@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:46:30 by onajem            #+#    #+#             */
/*   Updated: 2024/11/19 16:09:05 by onajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_res(long long nb, char *base, int bs, int *count)
{
	if (*count != -1)
	{
		if (nb < bs)
			print_char(base[nb], count);
		else
		{
			print_res(nb / bs, base, bs, count);
			print_res(nb % bs, base, bs, count);
		}
	}
}

void	ft_putnbr_base(long long nb, char *base, int bs, int *count)
{
	if (*count != -1)
	{
		if (nb < 0)
		{
			print_char('-', count);
			nb *= -1;
		}
		print_res(nb, base, bs, count);
	}
}

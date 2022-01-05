/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 05:51:03 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 07:53:22 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexi(unsigned long long a)
{
	const char	*base = "0123456789abcdef";

	if (a < 16)
		return (ft_putchar(base[a]));
	return (ft_putnbr_hexi(a / 16) + ft_putnbr_hexi(a % 16));
}

int	ft_putptr(void *p)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_putnbr_hexi((unsigned long long)p);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 06:12:27 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 07:51:59 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int a, int ucase)
{
	const char	*base = "0123456789abcdef";
	const char	*ubase = "0123456789ABCDEF";

	if (ucase == 1)
		base = ubase;
	if (a < 16)
		return (ft_putchar(base[a]));
	return (ft_putnbr_hex(a / 16, ucase) + ft_putnbr_hex(a % 16, ucase));
}

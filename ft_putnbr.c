/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:43:48 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 07:50:48 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	const char	*base = "0123456789";

	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
		return (ft_putchar('-') + ft_putnbr(-nb));
	if (nb < 10)
		return (ft_putchar(base[nb]));
	return (ft_putnbr(nb / 10) + ft_putnbr(nb % 10));
}

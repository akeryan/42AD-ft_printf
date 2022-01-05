/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 06:13:42 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 07:52:30 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	const char	*base = "0123456789";

	if (nb < 10)
		return (ft_putchar(base[nb]));
	return (ft_putnbr_u(nb / 10) + ft_putnbr_u(nb % 10));
}

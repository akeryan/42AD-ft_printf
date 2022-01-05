/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:42:28 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 07:50:06 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switch(va_list ap, char ch)
{
	int	len;

	len = 0;
	if (ch == 'c')
		len = ft_putchar(va_arg(ap, int));
	else if (ch == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (ch == 'p')
		len = ft_putptr(va_arg(ap, void *));
	else if (ch == 'd' || ch == 'i')
		len = ft_putnbr(va_arg(ap, int));
	else if (ch == 'u')
		len = ft_putnbr_u(va_arg(ap, unsigned int));
	else if (ch == 'x')
		len = ft_putnbr_hex(va_arg(ap, unsigned int), 0);
	else if (ch == 'X')
		len = ft_putnbr_hex(va_arg(ap, unsigned int), 1);
	else if (ch == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			len += ft_switch(ap, *(str + 1));
			str += 2;
		}
		else
		{
			ft_putchar(*str);
			len++;
			str++;
		}
	}
	va_end(ap);
	return (len);
}

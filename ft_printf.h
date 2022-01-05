/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 06:18:48 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 08:09:25 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *a, ...);
int	ft_putchar(char c);
int	ft_putstr(char *p);
int	ft_putptr(void *p1);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_hex(unsigned int h, int ucase);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:23:51 by akeryan           #+#    #+#             */
/*   Updated: 2021/12/04 05:36:44 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	if (str == NULL)
		return (ft_putstr("(null)"));
	if (*str == '\0')
		return (0);
	return (ft_putchar(*str) + ft_putstr(str + 1));
}

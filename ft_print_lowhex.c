/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:13:39 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/17 14:34:21 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lowhex(unsigned int nb)
{
	int		len;
	char	*hex;

	len = ft_hexlen(nb);
	hex = "0123456789abcdef";
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb > 15)
	{
		ft_print_lowhex(nb / 16);
		ft_print_lowhex(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
	return (len);
}

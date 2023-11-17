/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:56:28 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/16 23:32:01 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_addr(unsigned long nb)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = 0;
	if (nb > 15)
	{
		len += ft_print_addr(nb / 16);
		len += ft_print_addr(nb % 16);
	}
	else
		len += ft_putchar(hex[nb]);
	return (len);
}

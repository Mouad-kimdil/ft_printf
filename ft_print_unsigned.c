/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:07:48 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/16 23:31:48 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned long nb)
{
	int	len;

	len = nlen(nb);
	if (nb > 9)
	{
		ft_print_unsigned(nb / 10);
		ft_print_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (len);
}

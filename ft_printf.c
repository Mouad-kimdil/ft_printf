/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:56:36 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/17 14:48:39 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_percent(va_list ap, const char s, int len)
{
	if (s == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (s == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (s == 'd' || s == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (s == 'x')
		len += ft_print_lowhex(va_arg(ap, unsigned int));
	else if (s == 'X')
		len += ft_print_upphex(va_arg(ap, unsigned int));
	else if (s == 'u')
		len += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (s == 'p')
	{
		len += ft_putstr("0x");
		len += ft_print_addr((unsigned long long)va_arg(ap, void *));
	}
	else if (s == '%')
		len += ft_putchar(s);
	else
		len += ft_putchar(s);
	if (len < 0)
		return (-1);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	ap;
	int		i;
	int		j;

	if (write(1, "", 0) == -1)
		return (-1);
	i = -1;
	va_start(ap, s);
	len = 0;
	j = 0;
	while (s[++i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			len += ft_percent(ap, s[i + 1], j);
			i++;
		}
		else if (s[i] == '%')
			continue ;
		else
			len += ft_putchar(s[i]);
	}
	va_end(ap);
	return (len);
}

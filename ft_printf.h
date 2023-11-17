/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:58:59 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/17 14:49:38 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(long long nb);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	nlen(long long nb);
int	ft_print_lowhex(unsigned int nb);
int	ft_print_upphex(unsigned int nb);
int	ft_print_unsigned(unsigned long nb);
int	ft_print_addr(unsigned long nb);
int	ft_hexlen(long long nb);

#endif
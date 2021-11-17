/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:41:09 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/17 17:17:49 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_split_function(char c, va_list args)
{
	int						pt;
	char					*ps;
	unsigned long long int	vp;

	if (c == 'x' || c == 'X')
	{
		pt = va_arg(args, int);
		ps = to_hex(pt, (ft_intsize(pt) - 1));
		if (c == 'X')
			ft_putstr_fd(ft_strupper(ps), 1);
		else
			ft_putstr_fd(ps, 1);
	}
	else if (c == 'p')
	{
		vp = va_arg(args, unsigned long long int);
		ps = to_hex(vp, 12);
		if (vp == 0)
			ft_putstr_fd("0x0", 1);
		else
		{
			ft_putstr_fd("0x", 1);
			ft_putstr_fd(ps, 1);
		}
	}
}

int	ft_print_conversion(char c, va_list args, int pos)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else if (c == 'p' || c == 'x' || c == 'X')
		ft_split_function(c, args);
	else
		pos--;
	pos++;
	return (pos);
}

int	ft_printf(const char *str, ...)
{
	va_list					args;
	int						i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1);
		else
		{
			i = ft_print_conversion(str[i + 1], args, i);
		}
		i++;
	}
	return (0);
}

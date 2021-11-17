/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:27:43 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/17 17:31:45 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_inc.h"

char	*to_hex(unsigned long long int deci, int len)
{
	int						j;
	char					*hex;
	unsigned long long int	mod;
	unsigned long long int	rest;

	j = len;
	hex = (char *)malloc(sizeof(char) * (len + 1));
	mod = deci;
	hex[j] = '\0';
	j--;
	while (mod != 0)
	{
		rest = mod % 16;
		if (rest < 10)
			hex[j--] = 48 + rest;
		else
			hex[j--] = 87 + rest;
	mod = mod / 16;
	}
	return (hex);
}

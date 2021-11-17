/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:21:41 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/17 17:22:23 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_inc.h"

int	ft_intsize(int n)
{
	int	i;
	int	x;

	i = 1;
	x = n;
	while (x > 9)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:23:55 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/17 17:24:08 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_inc.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}

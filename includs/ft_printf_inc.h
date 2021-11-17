/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_inc.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:22:49 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/17 17:23:23 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_INC_H
# define FT_PRINTF_INC_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
char	*to_hex(unsigned long long int deci, int len);
char	*ft_strupper(char *s);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_intsize(int n);

#endif

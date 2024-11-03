/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel-mes@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:42:41 by moel-mes          #+#    #+#             */
/*   Updated: 2024/11/03 15:18:06 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	nbr_len(int n, int base);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n, int l);
int	print_p(void *ptr);
int	print_hex(unsigned int u, char c);
int	ft_print_u(unsigned int u);

#endif
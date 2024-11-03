/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-mes <moel-mes@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:30:28 by moel-mes          #+#    #+#             */
/*   Updated: 2024/11/03 15:45:56 by moel-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	int	l;

	l = 0;
	l += ft_putstr("0x");
	if (ptr == NULL)
	{
		l += ft_putstr("0");
		return (l);
	}
	else
		l += print_hex((long long)ptr, 'x');
	return (l);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:39:31 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/01/31 15:35:34 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static	int	whatstype(char format, va_list args)
{
	int	lenprint;

	lenprint = 0;
	if (format == 'c')
		lenprint = print_int(va_arg(args, int));
	else if (format == 's')
		lenprint = print_string(va_arg(args, char *));
	else if (format == 'p')
		lenprint = print_void(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		lenprint = print_nbr(va_arg(args, int));
	else if (format == 'u')
		lenprint = print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		lenprint = (print_hex(va_arg(args, int), format));
	else if (format == '%')
	{
		lenprint = print_int('%');
	}
	return (lenprint);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		lenprint;
	va_list	args;

	i = 0;
	lenprint = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			lenprint += whatstype(format[i + 1], args);
			i += 2;
		}
		else
		{
			lenprint += print_int(format[i]);
			i++;
		}
	}
	va_end(args);
	return (lenprint);
}

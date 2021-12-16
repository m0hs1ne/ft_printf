/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:55:09 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/14 19:08:50 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	va_start(ap, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_types(ap, &len, str[i]);
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}

void	ft_types(va_list ap, int *len, char c)
{
	if (c == 'c')
		ft_putchar((va_arg(ap, int)), len);
	else if (c == 's')
		ft_putstr((va_arg(ap, char *)), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr((va_arg(ap, int)), len);
	else if (c == 'x')
		ft_puthexa((va_arg(ap, unsigned int)), len);
	else if (c == 'X')
		ft_puthexau((va_arg(ap, unsigned int)), len);
	else if (c == '%')
		ft_putchar('%', len);
	else if (c == 'p')
		ft_printptr((va_arg(ap, unsigned long)), len);
	else if (c == 'u')
		ft_printunbr((va_arg(ap, unsigned int)), len);
}

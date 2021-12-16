/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaU.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:06:31 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/14 19:18:13 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexau(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexau(n / 16, len);
	ft_putchar(base[n % 16], len);
}

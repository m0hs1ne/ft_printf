/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:30:49 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/14 14:34:09 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_puthexa(n / 16, len);
	ft_putchar(base[n % 16], len);
}

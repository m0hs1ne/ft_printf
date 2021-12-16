/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:36:24 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/14 14:35:29 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		*len = *len + ft_strlen(s);
	}
	else
	{
		write(1, "(null)", 6);
		*len = *len + 6;
	}	
}

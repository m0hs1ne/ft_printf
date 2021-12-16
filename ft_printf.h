/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:18:53 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/14 19:17:47 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
int		ft_strlen(char *s);
int		ft_printf(const char *str, ...);
void	ft_puthexau(unsigned int n, int *len);
void	ft_puthexa(unsigned long n, int *len);
void	ft_printptr(unsigned long n, int *len);
void	ft_printunbr(unsigned int n, int *len);
void	ft_types(va_list ap, int *len, char c);

#endif

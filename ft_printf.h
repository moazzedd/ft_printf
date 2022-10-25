/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:12:23 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/25 02:28:35 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define HEX "0123456789abcdef"
# define HEX_MAJ "0123456789ABCDEF"

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nb);
int	ft_hexadecimale(unsigned int decimal, const char *hexaset);
int	ft_unsigne_value(unsigned int c);
int	ft_pointe(long decimal );
int	ft_printf(const char *s, ...);
int	ft_strlen(char *str);
int	hexa(unsigned long long dec, int i, int flag);

#endif
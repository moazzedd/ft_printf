/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:14:06 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/25 02:11:13 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int				i;
	unsigned int	n;

	n = 0;
	i = 0;
	if (nb < 0)
	{
		i += ft_putchar('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar((n % 10) + 48);
	}
	else
		i += ft_putchar(n + 48);
	return (i);
}

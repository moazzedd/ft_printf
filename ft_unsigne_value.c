/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigne_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:02:55 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/24 05:43:20 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigne_value(unsigned int c)
{
	int	i;

	i = 0;
	if (c >= 10)
	{
		i += ft_unsigne_value(c / 10);
		i += ft_putchar((c % 10) + 48);
	}
	else if (c < 10)
		i += ft_putchar(c + 48);
	return (i);
}

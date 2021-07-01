/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:13:41 by rshor             #+#    #+#             */
/*   Updated: 2021/06/15 16:04:08 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	symbol;
	int		counter;

	if (nb == -2147483648 )
		write(1, "-2147483648", 11);
	else if (nb < 0 )
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		symbol = nb + '0';
		write(1, &symbol, 1);
	}
	else
	{
		counter = nb / 10;
		ft_putnbr(counter);
		symbol = (nb % 10) + '0';
		write(1, &symbol, 1);
	}
}

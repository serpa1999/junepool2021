/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:01:22 by rshor             #+#    #+#             */
/*   Updated: 2021/06/23 11:22:57 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

/*void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}*/

int main(void)
{
	int my_array[] = {0, 1, 2, 3, 4};
	ft_foreach(my_array, 5, &ft_putnbr);
	return (0);
}

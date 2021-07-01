/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:52:42 by rshor             #+#    #+#             */
/*   Updated: 2021/06/23 13:25:32 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int    *ft_map(int *tab, int length, int(*f)(int));

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

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*my_array;

	i = 0;
	my_array = malloc(sizeof(int) * length);
	while (i < length)
	{
		my_array[i] = (*f)(tab[i]);
		i++;
	}
	return (my_array);
}*/

int	ft_square(int nb)
{
	return (nb + 1);
}

int main(void)
{
	int my_array[] = {0, 1, 2, 3, 4};
	int *scnd_array;
	int length;;

	length = 5;
	scnd_array = ft_map(my_array, length, &ft_square);
	ft_foreach(my_array, length, &ft_putnbr);
	printf("\n");
	ft_foreach(scnd_array, length, &ft_putnbr);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:29:34 by rshor             #+#    #+#             */
/*   Updated: 2021/06/23 18:15:17 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

char	**createMas(int n, int m)
{
	char **mas;

	mas = malloc(n * sizeof(*mas));
	for(int i = 0; i < n; i++)
		mas[i] = malloc(m * sizeof(mas[0]));
	return  mas;
}

/*int	ft_any(char **tab, int(*f)(char*))
{
	int	i;
	char	**pointer_to_array;

	i = 0;
	pointer_to_array = tab;
	while (pointer_to_array != 0)
	{
		write(1, *pointer_to_array, 1);
		write(1, "\n", 1);
		pointer_to_array++;
	}
	return (0);
}*/

int main(void)
{
	char	**my_array;
	int	width;
	int	height;

	width = 4;
	height = 4;
	my_array = createMas(width, height);
		for(int i = 0; i < width; i++)
			for(int j = 0; j < height; j++)
				my_array[i][j] = '1';
/*		for(int i1 = 0; i1 < width; i1++)
			for(int j1 = 0; j1 < height; j1++)
				printf(" %c ", my_array[i1][j1]);*/
//		free(my_array);
	for(int i = 0; i < width, i++)
		free(my_array[i]);
	return (0);
}

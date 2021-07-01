/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:52:42 by rshor             #+#    #+#             */
/*   Updated: 2021/06/23 13:39:27 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:08:13 by rshor             #+#    #+#             */
/*   Updated: 2021/06/16 16:25:07 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 1)
	{
		result = ft_recursive_power(nb, power - 1) * nb;
		power--;
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	return (result);
}

int	ft_sqrt(int nb)
{
	int		counter;
	int		flag;

	counter = nb;
	flag = 1;
	while (counter > 0 && flag == 1)
	{
		if (ft_recursive_power(counter, 2) == nb)
			flag = 0;
		counter--;
	}
	if (flag == 0)
		return (counter + 1);
	else
		return (0);
}

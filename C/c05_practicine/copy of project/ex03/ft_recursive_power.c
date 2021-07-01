/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:48:25 by rshor             #+#    #+#             */
/*   Updated: 2021/06/17 11:18:55 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power > 1)
	{
		result = ft_recursive_power(nb, power - 1) * nb;
		printf(" %d powered by %d is: %d  \n", nb, power, result);
		power--;
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
	{
		printf("---power is 1 result is %d \n", nb);
		return (nb);
	}
	return (result);
}

int main(void)
{
	int variable;

	variable = ft_recursive_power(-1, -1);
	printf("  %d   ", variable);
	return 0;
}

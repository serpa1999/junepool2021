/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:09:40 by rshor             #+#    #+#             */
/*   Updated: 2021/06/17 11:07:20 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	counter;

	counter = nb;
	while (counter > 1)
	{
		counter--;
		nb *= counter;
	}
	if (nb > 0)
		return (nb);
	else if (nb == 0)
		return (1);
}

int main(void)
{
	int variable = ft_iterative_factorial(0);
	printf("   %d    ", variable);
	return 0;
}

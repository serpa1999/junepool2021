/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:39:08 by rshor             #+#    #+#             */
/*   Updated: 2021/06/17 11:11:41 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb > 0)
	{
		result = ft_recursive_factorial(nb - 1) * nb;
		nb--;
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (result);
}

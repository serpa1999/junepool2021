/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:33:27 by rshor             #+#    #+#             */
/*   Updated: 2021/06/16 13:58:56 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index >= 2)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		index--;
	}
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	return (result);
}

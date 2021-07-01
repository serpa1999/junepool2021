/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:57:25 by rshor             #+#    #+#             */
/*   Updated: 2021/06/15 16:06:08 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int		number;
	int		sign;
	int		i;

	sign = 1;
	number = 0;
	i = 0;
	while (str[i] == 32 || str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while ((str[i] >= 9 && (str[i] <= 13)))
	{
		i++;
	}
	while (str[i] != '\0' && str[i] <= 57 && str[i] >= 48)
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 09:50:57 by rshor             #+#    #+#             */
/*   Updated: 2021/06/15 10:04:07 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	char	*char_pointer;
	int		length;

	length = 0;
	char_pointer = str;
	while (*char_pointer != '\0' )
	{
		length++;
		char_pointer++;
	}
	return (length);
}

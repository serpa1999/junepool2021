/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:04:01 by rshor             #+#    #+#             */
/*   Updated: 2021/06/17 12:30:09 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	int		counter;
	char	*ptr_to_arg;
	char	change_string;

	counter = argc;
	change_string = '\n';
	while (counter > 1)
	{
		ptr_to_arg = argv[counter - 1];
		while (*ptr_to_arg != '\0')
		{
			write(1, ptr_to_arg, 1);
			ptr_to_arg++;
		}
		write(1, &change_string, 1);
		counter--;
	}
	return (0);
}

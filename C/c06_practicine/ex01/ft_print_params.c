/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:37:56 by rshor             #+#    #+#             */
/*   Updated: 2021/06/17 12:02:06 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int		counter;
	char	*ptr_to_arg;
	char	change_string;

	counter = 1;
	change_string = '\n';
	while (counter < argc)
	{
		ptr_to_arg = argv[counter];
		while (*ptr_to_arg != '\0')
		{
			write(1, ptr_to_arg, 1);
			ptr_to_arg++;
		}
		write(1, &change_string, 1);
		counter++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:17:29 by rshor             #+#    #+#             */
/*   Updated: 2021/06/17 16:25:33 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int		length;
	char	*pointer_to_argv;

	length = 0;
	pointer_to_argv = argv[0];
	(void) argc;
	while (*pointer_to_argv != '\0')
	{
		pointer_to_argv++;
		length++;
	}
	write(1, argv[0], length);
	return (0);
}

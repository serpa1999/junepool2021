/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:19:14 by rshor             #+#    #+#             */
/*   Updated: 2021/06/21 18:54:39 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define ERROR_FILE_NAME "File name missing.\n"
#define ERROR_MANY_ARGS "Too many arguments.\n"
#define ERROR_CNT_READ "Cannot read file.\n"
#define BUFF_SIZE 4096

void	ft_putstr(char *str)
{
	char	*char_pointer;

	char_pointer = str;
	while (*char_pointer != '\0' )
	{
		write (1, char_pointer, 1);
		char_pointer++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	if (argc == 1)
		ft_putstr (ERROR_FILE_NAME);
	else if (argc > 2)
		ft_putstr (ERROR_MANY_ARGS);
	else
	{
		fd = open (argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr (ERROR_CNT_READ);
		ret = read (fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		if (close (fd) == -1)
			return (1);
	}
	return (0);
}

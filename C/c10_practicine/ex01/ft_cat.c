/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:19:14 by rshor             #+#    #+#             */
/*   Updated: 2021/06/22 15:04:54 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define ERROR_FILE_NAME "File name missing.\n"
#define ERROR_MANY_ARGS "Too many arguments.\n"
#define ERROR_CNT_READ "Cannot read file.\n"
#define BUFF_SIZE 30

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

void	ft_print_file(int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;

	ret = read (fd, buf, BUFF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUFF_SIZE);
	}
}

void	ft_print_text(void)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;

	ret = read(0, buf, BUFF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read (0, buf, BUFF_SIZE);
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		i;

	i = 1;
	if (argc == 1)
		ft_print_text();
	else if (argc == 2 && *argv[1] == '-')
		ft_print_text();
	else if (argc >= 2)
	{
		while (i < argc)
		{
			fd = open (argv[i], O_RDONLY);
			if (fd == -1)
			{
				ft_putstr (ERROR_CNT_READ);
				return (1);
			}
			ft_print_file(fd);
			if (close (fd) == -1)
				return (1);
			i++;
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:14:19 by rshor             #+#    #+#             */
/*   Updated: 2021/06/28 12:21:41 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define ERROR_CNT_READ "error cannot read file\n"
#define BUFF_SIZE 10

int	is_number(char symbol)
{
	if (symbol > '0' && symbol < '9')
		return(0);
	return (-1);
}

int	is_printable(char symbol)
{
	if (symbol >= 32 && symbol <= 126)
		return (0);
	return (-1);
}

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

char	**create_mas(int n, int m)
{
	char	**mas;
	int		i;
	int		j;

	i = 0;
	j = 0;

	mas = malloc(n * sizeof(*mas));
	while(i < n)
	{
		mas[i] = malloc(m * sizeof(mas[0]));
		i++;
	}
	return  mas;
}

void	free_mas(char **mas, int width)
{
	int	i;

	i = 0;
	while(i < width)
	{
		free(mas[i]);
		i++;
	}
}

int	get_len_file(char *file_name, int count_n_max)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;
	int		fd;
	int		i;
	int		count_n;
	int		count_buf;

	count_n = 0;
	fd = open (file_name, O_RDONLY);
	i = 0;
	if (fd == -1)
	{
		ft_putstr (ERROR_CNT_READ);
		return (1);
	}
	ret = read (fd, buf, BUFF_SIZE);
	count_buf = 0;
	while (ret)
	{
		i = 0;
//		printf("[%d]\n", count_buf);
		buf[ret] = '\0';
		while (i < BUFF_SIZE && buf[i] != '\n')
			i++;
		if (i == BUFF_SIZE - 1)
			count_buf++;

		if (buf[i] == '\n')
		{
			printf("i[%d] b[%d] n[%d]\n", i, count_buf, count_n);
			count_n++;
			if (count_n == count_n_max)
			{
				return (i + 1 + BUFF_SIZE * count_buf);
			}
			count_buf = 0;
		}

		ret = read(fd, buf, BUFF_SIZE);
		
	}
	return (-1);
}

int main(void)
{
	char	**my_array;
	int		width;
	int		height;
	int		local_variable;

	int z = 1;

	while (z < 4)
	{
		local_variable = get_len_file("map", z);
		printf("main var: %d\n", local_variable);
		z++;
	}
	/*            <-----------array
	width = 4;
	height = 4;
	my_array = create_mas(width, height);
		for(int i = 0; i < width; i++)
        {
			for(int j = 0; j < height; j++)
            {
				my_array[i][j] = (i + j) + '0';
            }
        }

		for(int i1 = 0; i1 < width; i1++)
		{
			for(int j1 = 0; j1 < height; j1++)
				printf(" %c ", my_array[i1][j1]);
			printf("\n");
		}
	free_mas(my_array, width);*/
	return (0);
}
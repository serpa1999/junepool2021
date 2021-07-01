/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 12:02:30 by rshor             #+#    #+#             */
/*   Updated: 2021/06/27 20:00:26 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 690
#define ERROR_FILE_NAME "File name missing.\n"
#define ERROR_MANY_ARGS "Too many arguments.\n"
#define ERROR_CNT_READ "Cannot read file.\n"

int	ft_length(char *str)
{
	int		i;
	char	*my_pointer;

	i = 0;
	my_pointer = str;
	while (*my_pointer != '\0')
	{
		i++;
		my_pointer++;
	}
	return (i);
}

char *ft_strcpy(char *src)
{
	int	i;
	char *dest;

	i = 0;
	dest = (char *)malloc(ft_length(src) * sizeof(char));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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

void	putstr_before_number(char *str)
{
	char	*char_pointer;

	char_pointer = str;
	while (*char_pointer  >= 'a' && *char_pointer <= 'z')
	{
		write (1, char_pointer, 1);
		char_pointer++;
	}
}

void	parse(char *frst, char* scnd)
{
	char	*frst_ptr;
	char	*scnd_ptr;
	int	flag = 0;

	scnd_ptr = scnd;
	frst_ptr = frst;
	while (*scnd_ptr != 0 && flag == 0)//search symbol in string
	{
		if (*scnd_ptr == *frst_ptr)//if symbol = symbol from string
		{
			while (*scnd_ptr == *frst_ptr && *frst_ptr != '\0')//search string in string
			{
				scnd_ptr++;
				frst_ptr++;
			}
			if (*frst_ptr == '\0')
				flag = 1;
			if (*scnd_ptr >= '0' && *scnd_ptr <= '9')
				flag = 0;
			frst_ptr = frst;
		}
		scnd_ptr++;
	}
	if (flag == 1)
	{
		scnd_ptr += 1;
		putstr_before_number (scnd_ptr);
	}
	else
		ft_putstr("Dict Error\n");
}

void	arguments(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;
	char	*arg_for_triade;


	fd = -100;
	if (argc == 3)
	{
		fd = open (argv[1], O_RDONLY);
		ret = read (fd, buf, BUF_SIZE);
		arg_for_triade = ft_strcpy(argv[2]);//rename to atoi
	}
	if (argc == 2 || argc == 3)
	{
		if (fd == -100)
		{
			fd = open ("numbers.dict", O_RDONLY);
			ret = read (fd, buf, BUF_SIZE);
			arg_for_triade = ft_strcpy(argv[1]);//rename to atoi
		}
		if (fd == -1)
		{
			ft_putstr (ERROR_CNT_READ);
		}
		parse(argv[1], buf);//rename to atoi
//		triade()
	}
}		

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
	while((str[i] >= 9 && (str[i] <= 13)))
	{
		i++;
	}
	while (str[i] != '\0' && str[i] <= 57 && str[i] >= 48)
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}

void	all_triades(char *str, char *dict)//"123" "numbers.dict"
{
	int		length;
	int		i;
	char	*buf;
	int		first_len;
	int		count_of_zero;

	i = 1;
	length = ft_length(str);
	buf = malloc(length * sizeof(char) + 1);
	while (i < length + 1)//iteration over "123456" string
	{
		printf("str[%d] = %c\n", i, str[i-1]);
		count_of_zero = 0;
		if (length - i - 1 == 1)//start of triade - recount first_len and push 1st nb
		{
			first_len = (length - i) % 3;
			if (first_len == 0)
				first_len = 3;
		}
		else
			first_len--;
		printf("flen(%d)\n", first_len);
		if (str[i-1] == 0 && length == 1)//triade 0
		{
//			push "0" to string
			printf("%d\n", str[i-1]);//delete
		}
		else if (first_len != 2)//triade 1-9
		{
//			push 1-9 to string
			printf("%d\n", str[i-1]);//delete
		}
		else if (first_len == 2 && str[i-1] == 1)//triade 11-19
		{
//			push 11-19 to string
			printf("%d%d\n", str[i-1], str[i + 1-1]);//delete
			i += 2;
		}
		if (first_len == 1)//zeros
			count_of_zero = first_len;
		else if (i < length - 1)
			count_of_zero = length - i;
		printf("zero:%d\n", count_of_zero);
//		parse(buf, dict)
		i++;
	}
}

int	main(int argc, char **argv)
{
	arguments(argc, argv);
//	char *frst = "123";
//	char *scnd = "1205123:one hundred twenty two 4578";
//	parse (frst, scnd);
//	all_triades("123456", "numbers.dict");
	
	return (0);
}

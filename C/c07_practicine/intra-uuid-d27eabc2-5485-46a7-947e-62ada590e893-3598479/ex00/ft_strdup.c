/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 09:09:37 by rshor             #+#    #+#             */
/*   Updated: 2021/06/18 11:41:01 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>

char	*ft_strdup(char *src)
{
	char	*ptr_to_output;
	char	*ptr_to_src;
	int		length;
	char	*ptr_to_src_2;
	char	*ptr_to_output_2;

	length = 0;
	ptr_to_src = src;
	ptr_to_src_2 = src;
	while (*ptr_to_src != '\0')
	{
		ptr_to_src++;
		length++;
	}
	ptr_to_output = malloc(length + 1);
	ptr_to_output_2 = ptr_to_output;
	while (*ptr_to_src_2 != '\0')
	{
		*ptr_to_output_2 = *ptr_to_src_2;
		ptr_to_output_2++;
		ptr_to_src_2++;
	}
	*ptr_to_output_2 = '\0';
	return (ptr_to_output);
}

int	main(void)
{
//	printf("origin function returns:");
	char str[] = "hello";

//	printf("origin function returns:");
//	write(1, strdup(str), 1);
//	printf("\nand my function returns:");
	write(1, ft_strdup(str), 1);
	return (0);
}

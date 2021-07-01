/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:13:09 by rshor             #+#    #+#             */
/*   Updated: 2021/06/24 19:55:14 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*pointer_to_list;

	pointer_to_list = malloc(sizeof(*data));
	if (pointer_to_list)
	{
		pointer_to_list->data = data;
		pointer_to_list->next = NULL;
	}
	return (pointer_to_list);
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

int main(void)
{
	t_list *list;

	list = NULL;
	list = ft_create_elem("hello-world");
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	free(list);
	return 0;
}

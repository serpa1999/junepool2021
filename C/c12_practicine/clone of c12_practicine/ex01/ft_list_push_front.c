/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:03:38 by rshor             #+#    #+#             */
/*   Updated: 2021/06/24 21:09:49 by rshor            ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*pointer_to_list;

	pointer_to_list = ft_create_elem(data);
	pointer_to_list->next = *begin_list;
	*begin_list = pointer_to_list;
}

void	print_list(t_list *list)
{
	while(list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int main(void)
{
	t_list *list;

	list = NULL;
//	list = ft_create_elem("hello-world");
//	print_list(list);
//	ft_putstr("\n");
	ft_list_push_front(&list, "i-am-begin");
	print_list(list);
	free(list);
	return (0);
}

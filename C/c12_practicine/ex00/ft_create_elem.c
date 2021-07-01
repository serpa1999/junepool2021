/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:13:09 by rshor             #+#    #+#             */
/*   Updated: 2021/06/24 20:02:01 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

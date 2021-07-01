/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:42:25 by rshor             #+#    #+#             */
/*   Updated: 2021/06/24 19:23:15 by rshor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H
#include <stdio.h>

typedef struct	s_list
{
	struct	s_list 	*next;
	void			*data;
}					t_list;

#endif

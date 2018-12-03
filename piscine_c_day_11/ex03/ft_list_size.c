/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 23:34:48 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/28 23:38:40 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		counter++;
	}
	return (counter);
}

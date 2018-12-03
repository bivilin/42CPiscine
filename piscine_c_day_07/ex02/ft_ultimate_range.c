/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:45:07 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/22 19:00:55 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *in_range;

	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	in_range = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		in_range[i] = min + i;
		i++;
	}
	*range = in_range;
	return (i);
}

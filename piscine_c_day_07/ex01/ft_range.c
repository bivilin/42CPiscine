/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:55:33 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/22 16:40:00 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tgt;
	int i;

	if (min >= max)
		return (NULL);
	tgt = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		tgt[i] = min + i;
		i++;
	}
	return (tgt);
}

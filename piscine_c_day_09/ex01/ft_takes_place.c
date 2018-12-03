/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:19:20 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/23 16:49:04 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void fix(hour, i, j, c)
{
	int c11;

	c11 = c;
	if (hour == 11 || hour == 23)
	{
		c11 = 'A';
		if (hour == 11)
			c11 = 'P';
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%i.00 %c.M. AND %i.00 %c.M.\n", i, c, j, c11);
}

void	ft_takes_place(int hour)
{
	int		i;
	int		j;
	char	c;

	i = hour;
	j = hour + 1;
	c = 'P';
	if (hour == 0 || hour == 24 || hour == 12)
	{
		i = 12;
		j = 1;
		if (hour == 24 || hour == 0)
			c = 'A';
	}
	else if (hour < 12)
		c = 'A';
	else
	{
		i -= 12;
		j = i + 1;
	}
	fix(hour, i, j, c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 23:09:15 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/17 23:23:15 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int square;

	i = 1;
	square = 0;
	while (square <= nb)
	{
		square = i * i;
		if (nb == square)
			return (i);
		else
			i++;
	}
	return (0);
}

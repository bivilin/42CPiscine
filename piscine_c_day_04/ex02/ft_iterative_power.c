/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:02:40 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/17 18:39:20 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	i = 1;
	r = nb;
	if (power > 0)
	{
		while (i < power)
		{
			r = r * nb;
			i = i + 1;
		}
		return (r);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}

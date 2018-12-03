/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:02:40 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/17 21:05:13 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int r;

	r = 1;
	if (power > 0)
	{
		r = nb * ft_recursive_power(nb, power - 1);
		return (r);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}

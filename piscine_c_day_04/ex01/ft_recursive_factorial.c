/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:30:25 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/17 16:47:17 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int r;

	r = nb;
	if (nb > 0 && nb < 13)
	{
		if (nb != 1)
		{
			r = nb * ft_recursive_factorial(nb - 1);
		}
		return (r);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

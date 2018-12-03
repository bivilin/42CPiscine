/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 21:42:32 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/17 22:08:11 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int r;

	r = 0;
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
	{
		r = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (r);
	}
}

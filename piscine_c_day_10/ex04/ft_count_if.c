/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:25:47 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/27 22:27:34 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		c += f(tab[i]);
		i++;
	}
	return (c);
}

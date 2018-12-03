/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adfische <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:50:09 by adfische          #+#    #+#             */
/*   Updated: 2018/03/18 19:05:14 by adfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_line(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
}

void	mid_line(int x, int y)
{
	int ix;
	int iy;

	ix = 0;
	iy = 0;
	while (iy < y - 2)
	{
		ft_putchar('\n');
		ix = 0;
		ft_putchar('B');
		while (ix < x - 2)
		{
			ft_putchar(' ');
			ix++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		iy++;
	}
}

void	bot_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('\n');
	ft_putchar('C');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		top_line(x);
		mid_line(x, y);
		if (y > 1)
		{
			bot_line(x);
		}
		ft_putchar('\n');
	}
}

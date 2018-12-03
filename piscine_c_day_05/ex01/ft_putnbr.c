/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:39:00 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/20 19:13:25 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	return (0);
}

int	ft_putnbr(int nb)
{
	int		div;
	int		mod;

	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (0);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	div = nb / 10;
	mod = nb % 10;
	if (nb >= 10)
	{
		ft_putnbr(div);
		ft_putchar(mod + '0');
	}
	if (nb < 10)
		ft_putchar(mod + '0');
	return (0);
}

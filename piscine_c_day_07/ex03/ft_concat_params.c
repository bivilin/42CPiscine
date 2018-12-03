/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 22:14:05 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/22 22:51:01 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;
	int		position;

	i = 1;
	size = 0;
	while (i < argc)
	{
		size = size + ft_strlen(argv[i]) + 1;
		i++;
	}
	str = (char*)malloc(size);
	i = 1;
	position = 0;
	while (i < argc)
	{
		ft_strcpy(str + position, argv[i]);
		position = position + ft_strlen(argv[i]);
		str[position] = '\n';
		position++;
		i++;
	}
	str[position - 1] = '\0';
	return (str);
}

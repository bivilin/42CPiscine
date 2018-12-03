/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:08:26 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/03/22 12:37:23 by bviseu-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tgt;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	tgt = (char*)malloc(sizeof(char) * (src_len + 1));
	i = 0;
	while (src[i] != '\0')
	{
		tgt[i] = src[i];
		i++;
	}
	tgt[i] = '\0';
	return (tgt);
}

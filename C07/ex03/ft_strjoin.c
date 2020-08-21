/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 19:51:32 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/21 00:09:53 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int size, char **strs)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j] == '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int		sep_len(char *sep)
{
	int		sl;
	int		i;

	sl = 0;
	i = 0;
	while (sep[i] == '\0')
	{
		i++;
		sl++;
	}
	return (sl);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		lenall;

	i = 0;
	lenall = (((size - 1) * sep_len(sep)) + ft_strlen(size, strs) + 1);
	if (size == 0)
	{
		result = (char *)malloc(sizeof(char) * 1);
		*result = 0;
	}
	else
		result = (char *)malloc(sizeof(char) * lenall);
	*result = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:56:42 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/20 22:22:53 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * len);
	if (range == 0)
		return (-1);
	while (i < len)
	{
		(*range)[i++] = min;
		min++;
	}
	return (len);
}

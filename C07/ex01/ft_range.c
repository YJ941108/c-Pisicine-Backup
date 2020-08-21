/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:04:14 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/20 18:26:07 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *result;
	int i;

	len = max - min;
	result = (int *)malloc(sizeof(int) * len);
	i = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

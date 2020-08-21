/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:28:41 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/20 11:56:50 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	long long		i;
	long long		num;

	num = 0;
	i = 0;
	while (num <= nb)
	{
		i++;
		num = i * i;
	}
	return (i);
}

int		ft_find_next_prime(int nb)
{
	long long	i;
	long long	num;

	num = 0;
	if (nb < 3)
		return (2);
	i = ft_sqrt(nb);
	while (i > 1)
	{
		if (nb % i == 0)
		{
			nb++;
			i = ft_sqrt(nb);
		}
		i--;
	}
	return (nb);
}

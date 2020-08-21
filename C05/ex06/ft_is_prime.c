/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 15:38:01 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/19 17:26:00 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long	i;
	long long	num;
	int			result;

	i = 1;
	num = 0;
	result = 0;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (num <= nb)
	{
		i++;
		num = i * i;
	}
	while (i > 1)
	{
		result = nb % i;
		i--;
		if (result == 0)
			return (0);
	}
	return (1);
}

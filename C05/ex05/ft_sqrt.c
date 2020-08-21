/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 13:07:37 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/19 23:37:35 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	num;
	long long	i;

	num = 1;
	i = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (num < nb)
		{
			i++;
			num = i * i;
		}
		if (num == nb)
			return (i);
		else
			return (0);
	}
}

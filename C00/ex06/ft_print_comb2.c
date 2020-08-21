/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:54:38 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/04 04:21:38 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int ab;
	int bc;

	ab = 0;
	bc = 1;
	while (ab <= 98)
	{
		bc = ab + 1;
		while (bc <= 99)
		{
			ft_putchar(ab / 10 + '0');
			ft_putchar(ab % 10 + '0');
			ft_putchar(' ');
			ft_putchar(bc / 10 + '0');
			ft_putchar(bc % 10 + '0');
			if (ab != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			bc++;
		}
		ab++;
	}
}

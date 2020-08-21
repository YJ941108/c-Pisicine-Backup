/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 04:57:52 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/05 17:46:49 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		if (b != n)
		{
			ft_putchar(b + '0');
			ft_print_combn(n);
		}
		ft_putchar(',');
		ft_putchar(' ');
		a++;
		b++;
	}
}

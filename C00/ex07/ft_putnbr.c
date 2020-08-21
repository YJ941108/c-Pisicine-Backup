/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 23:56:07 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/15 14:53:30 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	mi(char m);

void	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	mi(char m)
{
	write(1, &m, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
	else if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(8);
	}
	else if (nb < 0)
	{
		mi(45);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else
		ft_putchar(nb);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 02:36:05 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/11 04:24:39 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*ts;
	char			a;
	char			b;
	unsigned char	c;

	ts = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			c = *str;
			a = ts[c / 16];
			b = ts[c % 16];
			write(1, &a, 1);
			write(1, &b, 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

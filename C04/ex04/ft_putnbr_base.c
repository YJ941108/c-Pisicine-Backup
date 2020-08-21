/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:55:40 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/18 15:23:07 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int		base_check(char *base)
{
	int a;
	int i;
	int j;

	i = 0;
	j = 0;
	a = ft_strlen(base);
	if (base[i] == '\0' || a == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		str_len;
	int		result;
	char	print;

	result = 0;
	if (base_check(base) == 0)
		return ;
	str_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		print = base[(nbr % str_len) * -1];
		result = (nbr / str_len) * -1;
	}
	else
	{
		result = nbr / str_len;
		print = base[nbr % str_len];
	}
	if (result != 0)
		ft_putnbr_base(result, base);
	write(1, &print, 1);
}

int main(void)
{
	ft_putnbr_base(-2147483648, "01");
}

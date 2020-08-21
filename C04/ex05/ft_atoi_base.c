/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:38:36 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/18 15:24:00 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int		base_check(char *base)
{
	int base_len;
	int i;
	int j;

	i = 0;
	j = 0;
	base_len = ft_strlen(base);
	if (base[i] == '\0' || base_len == 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int		str_check(char str, char *base)
{
	int i;

	i = 0;
	if ((str >= 9 && str <= 13) || str == ' ')
		return (1);
	if (str == '-')
		return (-1);
	if (str == '+')
		return (-2);
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (2);
		i++;
	}
	return (0);
}

int		str_change(char str, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int		len;
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	len = ft_strlen(base);
	result = 0;
	if (base_check(base) == 0)
		return (0);
	while (str_check(str[i], base) == 1)
		i++;
	while (str_check(str[i], base) < 0)
	{
		if (str_check(str[i], base) == -1)
			sign = sign * (-1);
		i++;
	}
	while (str_check(str[i], base) == 2)
		result = result * len + (str_change(str[i++], base));
	return (result * sign);
}

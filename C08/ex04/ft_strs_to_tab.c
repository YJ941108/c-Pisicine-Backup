/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:52:12 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/21 16:04:23 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *a)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (a[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char				*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	char			*dest;
	t_stock_str		*point;

	i = 0;
	point = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (point == 0)
		return (0);
	while (i < ac)
	{
		point[i].size = ft_strlen(av[i]);
		point[i].str = av[i];
		point[i].copy = ft_strcpy(point[i].copy, point[i].str);
	}
	point[i].str = 0;
}

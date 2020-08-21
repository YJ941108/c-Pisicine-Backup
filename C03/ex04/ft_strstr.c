/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 21:21:30 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/14 22:43:49 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_len(char *to_find)
{
	int		len;

	len = 0;
	while (to_find[len])
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = 0;
	j = 0;
	temp = str;
	len = find_len(to_find);
	if (*to_find == '\0')
	{
		return (str);
	}
	while (temp[i] != '\0')
	{
		j = 0;
		while (temp[i + j] == to_find[j] && temp[i + j])
		{
			j++;
		}
		if (len == j)
			return (&temp[i]);
		i++;
	}
	return (0);
}

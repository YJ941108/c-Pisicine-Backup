/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:30:24 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/12 17:13:26 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_chk;

char	*ft_strcapitalize(char *str)
{
	char *temp;

	temp = str;
	g_chk = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (g_chk == 0)
				*str = *str - 32;
			g_chk = 1;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (g_chk == 1)
				*str = *str + 32;
			g_chk = 1;
		}
		else if (*str >= '0' && *str <= '9')
			g_chk = 1;
		else
			g_chk = 0;
		str++;
	}
	return (temp);
}

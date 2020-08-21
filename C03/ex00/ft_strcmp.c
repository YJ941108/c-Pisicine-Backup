/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 20:48:51 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/16 18:36:59 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			i = 1;
			break ;
		}
		else if (*s1 < *s2)
		{
			i = -1;
			break ;
		}
		else
			i = 0;
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		i = 1;
	else if (*s1 < *s2)
		i = -1;
	return (i);
}

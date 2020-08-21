/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 00:43:20 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/12 17:17:58 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*temp;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	temp = src;
	while (*temp)
	{
		i++;
		temp++;
	}
	if (size == 0)
		return (i);
	else if (size == 1)
		*dest = '\0';
	else
		while (j + 1 < size)
		{
			dest[j] = src[j];
			j++;
		}
	dest[j] = '\0';
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:02:41 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/14 22:51:11 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	dest_len(char *dest)
{
	unsigned int dl;

	dl = 0;
	while (*dest)
	{
		dl++;
		dest++;
	}
	return (dl);
}

unsigned int	src_len(char *src)
{
	unsigned int sl;

	sl = 0;
	while (*src)
	{
		sl++;
		src++;
	}
	return (sl);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	result;

	i = 0;
	j = 0;
	dl = dest_len(dest);
	result = dl;
	sl = src_len(src);
	if (dl <= size)
	{
		while (result + 1 < size && src[j])
		{
			dest[dl + j] = src[j];
			j++;
			result++;
		}
		dest[dl + j] = '\0';
		return (dl + sl);
	}
	else
		return (sl + size);
}

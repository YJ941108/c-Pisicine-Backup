/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon </var/mail/yujeon>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 22:34:33 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/14 22:34:17 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	unsigned int nb = 100000;
	char	src[] = "ss";
	char	src3[] = "ss";
	char	dest[50] = "ss";
	printf("%s\n%s\n",ft_strncat(dest,src,nb), strncat(dest, src3, nb));

	char dest1[30] = "ddddd\0";
	char dest2[30] = "iav\0";
	char src2[] = "abc\0defghijk\0";
	unsigned int size = 0;
	printf("%s\n%s\n", ft_strncat(dest1, src2, size), strncat(dest1, src2, size));
	printf("%s\n%s\n", ft_strncat(dest2, src2, size), strncat(dest2, src2, size));
	return (0);
}

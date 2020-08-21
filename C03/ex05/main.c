/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 12:26:32 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/14 22:51:29 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[30] = "hello";
	char src[20] = "12312354";
	int size = 300;

	char dest2[30] = "hello";
	char src2[20] = "12312354";

	printf("ft_strlcat = %u\n", ft_strlcat(dest2,src2,size));
	printf("%s\n",dest2);
//	printf("strlcat = %lu\n",strlcat(dest,src,size));
//	printf("%s\n",dest);
}

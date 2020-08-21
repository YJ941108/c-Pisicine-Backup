/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:57:33 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/12 18:04:35 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	int i = 0;
	char src[] = "12LKXdHsdooCUmH";
	char dest[50];
//	i = ft_strlcpy(dest, src, 4);
	i = strlcpy(dest, src, 4);

	printf("%s",dest);
	printf("%d",i);
}

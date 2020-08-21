/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon </var/mail/yujeon>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 22:34:33 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/11 22:59:54 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
//	char	dest[8] = "abcdefg";
	char	src[6] = "12456";
	char	dest[8] = "abcdefg";
	printf("%s",ft_strcat(src,dest));
}

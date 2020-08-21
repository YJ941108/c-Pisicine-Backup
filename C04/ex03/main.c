/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 15:05:09 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/18 15:21:41 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("atoi = %d\n",atoi("-2147483648"));	
	printf("ftatoi = %d\n",ft_atoi("-2147483648"));
	printf("atoi = %d\n",atoi("   ---123    "));
	printf("ftatoi = %d\n",ft_atoi("   ---123    "));
	printf("atoi = %d\n",atoi("-123456789"));
	printf("ftatoi = %d\n",ft_atoi("-123456789"));
	printf("atoi = %d\n",atoi("   *123"));
	printf("ftatoi = %d\n",ft_atoi("   *123"));
	printf("atoi = %d\n",atoi("   123av1234"));
	printf("ftatoi = %d\n",ft_atoi("   123av1234"));
}

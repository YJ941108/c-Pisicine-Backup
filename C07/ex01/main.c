/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:44:48 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/21 09:33:23 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int *ft_range(int min, int max);

int main(void)
{
	int i = 0;
	int *j;

	j = ft_range(1, 10);
	while (i < 9)
	{
		printf("%d ",  j[i]);
		i++;
	}
}
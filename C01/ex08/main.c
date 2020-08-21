/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:05:14 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/10 13:59:38 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int a[10] = {1,7,9,5,3,4,56,6,4,67};
	ft_sort_int_tab(a,10);
	int count =0;
	while (count < 10)
	{
		printf("%d ,", a[count]);
		count++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon </var/mail/yujeon>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 18:55:27 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/06 23:21:57 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int x[] = {1,2,3,4,5,6,7,8,9};
	int *tab = x;
	int size = 0;

	ft_rev_int_tab(tab, 9);
	while(size <= 8)
	{
		printf("%d ", tab[size]);
		size++;
	}
	return (0);
}

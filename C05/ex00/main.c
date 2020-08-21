/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:50:57 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/20 11:19:41 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main(void)
{
	printf("%d\n",ft_iterative_factorial(11));
	printf("%d\n",ft_iterative_factorial(-3));
	printf("%d\n",ft_iterative_factorial('\0'));
}

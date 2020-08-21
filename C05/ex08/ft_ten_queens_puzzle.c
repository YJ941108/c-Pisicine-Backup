/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 19:35:03 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/19 21:38:00 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_grid(char *puzzle[])
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{	
			puzzle[i][j] = '0';
			j++;
		}
	}
	i++;
}

#include <stdio.h>
int main(void)
{
	int i;
	char puzzle[11];
	set_grid(**puzzle);
	i = 0;
	while (i < 10)
	{
		printf("%s", **puzzle);
		i++;
	}
}


int		ft_ten_queens_puzzle(void)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	return (0);
	
}

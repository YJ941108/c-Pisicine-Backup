/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 06:26:13 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/15 13:22:51 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int main(void)
{
	char *str = "hello";
	printf("%s%d",str,ft_strlen(str));
	printf("%s%lu",str,strlen(str));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:55:29 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/20 16:02:52 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int		main(void)
{
	printf("origin=%s\n",strdup(""));
	printf("mine=%s\n",ft_strdup(""));
	printf("origin=%s\n",strdup("hello"));
	printf("mine=%s\n",ft_strdup("hello"));
	printf("origin=%s\n",strdup("12345--6789"));
	printf("mine%s\n",ft_strdup("12345--6789"));
}

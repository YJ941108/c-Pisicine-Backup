/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 03:31:52 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/11 03:56:21 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char str[50] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}

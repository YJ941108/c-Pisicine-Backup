/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon <yujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 18:33:02 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/20 23:56:31 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



int ft_ultimate_range(int **range, int min, int max);



int main(void)

{

		int min = -10;

			int max = 10;

				int *result;

					int range = ft_ultimate_range(&result, min, max);

						printf("%d\n", range);

							for(int i = 0; i < max - min; i++)

										printf("%d ", result[i]);

								printf("\n");

									return 0;

}

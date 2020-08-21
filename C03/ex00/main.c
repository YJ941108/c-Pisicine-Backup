/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon </var/mail/yujeon>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:46:32 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/11 19:34:19 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1 = "     ";
	char *s2 = "abcde";
	char *s3 = "abc";
	char *s4 = "1234";
	char *s5 = "1234";
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("s3=%s\n", s3);
	printf("s4=%s\n", s4);
	printf("s5=%s\n", s5);
	printf("fts1s2=%d\n",ft_strcmp(s1, s2));
	printf("fts1s3=%d\n",ft_strcmp(s1, s3));
	printf("fts2s3=%d\n",ft_strcmp(s2, s3));
	printf("fts3s4=%d\n",ft_strcmp(s3, s4));
	printf("fts4s5=%d\n",ft_strcmp(s4, s5));
	printf("s1s2=%d\n",strcmp(s1, s2));
	printf("s1s3=%d\n",strcmp(s1, s3));
	printf("s2s3=%d\n",strcmp(s2, s3));
	printf("s3s4=%d\n",strcmp(s3, s4));
	printf("s4s5=%d\n",strcmp(s4, s5));
}

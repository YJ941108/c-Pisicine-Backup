/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeon </var/mail/yujeon>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:46:32 by yujeon            #+#    #+#             */
/*   Updated: 2020/08/14 21:30:50 by yujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	unsigned int n = 1000;
	char *s1 = "\0";
	char *s2 = "\0";
	char *s3 = "abc";
	char *s4 = "1234";
	char *s5 = "1234";
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("s3=%s\n", s3);
	printf("s4=%s\n", s4);
	printf("s5=%s\n", s5);
	printf("fts1s2=%d\n",ft_strncmp(s1, s2,n));
	printf("fts1s3=%d\n",ft_strncmp(s1, s3,n));
	printf("fts2s3=%d\n",ft_strncmp(s2, s3,n));
	printf("fts3s4=%d\n",ft_strncmp(s3, s4,n));
	printf("fts4s5=%d\n",ft_strncmp(s4, s5,n));
	printf("s1s2=%d\n",strncmp(s1, s2,n));
	printf("s1s3=%d\n",strncmp(s1, s3,n));
	printf("s2s3=%d\n",strncmp(s2, s3,n));
	printf("s3s4=%d\n",strncmp(s3, s4,n));
	printf("s4s5=%d\n",strncmp(s4, s5,n));
}

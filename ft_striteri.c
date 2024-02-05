/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:16:36 by yohan             #+#    #+#             */
/*   Updated: 2023/10/29 12:13:01 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cha;

	cha = 0;
	while (*s)
	{
		f(cha, s);
		cha++;
		s++;
	}
}

void	ft_tolower2(unsigned int i, char *str)
{
	(void)i;
	if (*str >= 97 && *str <= 122)
		*str -= 32;
}
/* 
int	main(void)
{
	char	str[];

	str[] = "hello my good old friends...";
	printf("old string: %s\n", str);
	ft_striteri(str, ft_tolower2);
	printf("new string: %s\n", str);
	return (0);
}
 */
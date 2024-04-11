/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:31 by yohan             #+#    #+#             */
/*   Updated: 2024/04/09 09:22:54 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t nb)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < nb)
	{
		s[i] = 0;
		i++;
	}
}
/* 
int main (void)
{
	char	x[30];

	x[30] = "hello my friend";
	ft_bzero(x+2, 5);
	printf("%s\n", x);
	bzero(x+2, 5);
	printf("%s\n", x);
	return (0);
}
*/
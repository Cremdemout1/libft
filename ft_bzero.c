/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:31 by yohan             #+#    #+#             */
/*   Updated: 2023/10/12 15:50:26 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t nb)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (ptr[i] && i < nb)
	{
		ptr[i] = 0;
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
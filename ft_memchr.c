/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:05 by yohan             #+#    #+#             */
/*   Updated: 2024/04/09 08:09:49 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		if ((unsigned char)ptr[i] == (unsigned char)c)
			return ((char *)ptr + i);
		i++;
	}
	return (0);
}
/* 
int main (void)
{
	char	x[];

    x[] = "absdurbuivbasliubviruueivb";
    printf ("%s\n", (char *) ft_memchr(x, 'l', 15));
    printf ("%s", (char *)memchr(x, 'l', 15));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:47 by yohan             #+#    #+#             */
/*   Updated: 2023/10/13 09:24:16 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	char const	*src1;

	i = 0;
	dest1 = dest;
	src1 = src;
	if (dest1 <= src1)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
	}
	return (dest);
}
/* 
int main (void)
{
	char	dest[20];
	char	src[];

	src[] = "hello000i";
    printf("%s\n", (char *)ft_memmove(dest, src, 30));
    //printf("%s", (char *)memmove(dest, src, ));
    return (0);
}
*/
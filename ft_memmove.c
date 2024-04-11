/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:47 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:34:54 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*dest1;
	char const	*src1;

	i = n - 1;
	dest1 = dest;
	src1 = src;
	/* if (src1 == NULL  dest1 == NULL)
		return (NULL); */
	if (dest1 > src1)
	{
		while (i >= 0)
		{
			dest1[i] = src1[i];
			i--;
		}
	}
	else
		ft_memcpy(dest1, src1, n);
	return (dest);
}
/* 
int main (void)
{
	char	dest[20];
	char	src[] = "hello000i";
	
    printf("%s\n", (char *)ft_memmove(dest, src, 30));
    //printf("%s", (char *)memmove(dest, src, ));
    return (0);
}
 */
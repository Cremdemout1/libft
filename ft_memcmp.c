/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:00 by yohan             #+#    #+#             */
/*   Updated: 2023/11/01 16:15:22 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (s1[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/* 
int main (void)
{
    char x[]= "zyxbcdefgh";
    char y[]= "abcdefgxyz";
    printf("%d\n", ft_memcmp(x, y, 0));
    printf("%d", memcmp(x, y, 0));
    return (0);
}
 */
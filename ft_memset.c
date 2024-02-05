/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:51 by yohan             #+#    #+#             */
/*   Updated: 2023/10/12 12:42:52 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/* 
int main (void)
{
	char	str[20];

    str[20] = "hello there";
    printf("mine: %s\n", (char *) ft_memset(str, 49, sizeof (char) * 4));
    printf("real: %s", (char *) memset(str, 49, sizeof (char) * 4));
    return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:41:31 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:33:30 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t i)
{
	size_t	j;
	size_t	len;

	j = 0;
	len = 0;
	while (src[len])
		len++;
	if (i > 0)
	{
		while (src[j] && j < (i - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (len);
}
/* 
int	main (void)
{
	char	x[20];
	char	y[10];

	y[10] = "hello";
	printf("%zu", ft_strlcpy(x, y, 20));
	return (0);
}
 */
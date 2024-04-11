/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:10 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:33:36 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t sizeofbuf)
{
	size_t	i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (sizeofbuf <= i)
		j += sizeofbuf;
	else
		j += i;
	while (src[k] && i + 1 < sizeofbuf)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}

/* 
int	main (void)
{
	char	dest[15];

	dest[15] = "o";
    printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    printf("%zu\n", strlcat(dest, "lorem ipsum dolor sit amet", 15));
    write(1, dest, 15);
	return (0);
}
*/
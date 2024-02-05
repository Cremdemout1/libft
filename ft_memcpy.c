/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:43 by yohan             #+#    #+#             */
/*   Updated: 2023/10/13 09:24:45 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr;
	const char	*copd;

	i = 0;
	ptr = (char *)dest;
	copd = (const char *)src;
	while (i < n)
	{
		ptr[i] = copd[i];
		i++;
	}
	return (dest);
}

/* 
int	main(void)
{
	char	dest[50];
	char	src[] = "hello monkey";
	printf("%s\n", (char *) ft_memcpy(dest, src, 12));
	printf("%s", (char *) memcpy(dest, src, 12));
	return (0);
} */

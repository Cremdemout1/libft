/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:28 by yohan             #+#    #+#             */
/*   Updated: 2024/04/24 09:38:07 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			length;
	char			*dest;

	i = 0;
	length = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= length)
		return (ft_strdup(""));
	if (start + len > length)
		len = length - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (len != 0 && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void) {
    char *x = "lorem ipsum";
    char *substring = ft_substr(x, 400, 20);

    if (substring != NULL)
	{
        printf("%s\n", substring);
        free(substring);
    }
    return (0);
}
 */
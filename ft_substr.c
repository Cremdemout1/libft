/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:28 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:37:04 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			length;
	char			*sub;

	i = 0;
	length = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= length)
		return (ft_strdup(""));
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *sub;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	sub = malloc (sizeof (char) * len + 1);
	if (sub == NULL)
		return (NULL);
	
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
 */
/* 
int	main(void) {
    char *x = "";
    char *substring = ft_substr(x, 7, 1111);

    if (substring != NULL)
	{
        printf("%s\n", substring);
        free(substring);
    }
    return (0);
}
 */
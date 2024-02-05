/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:48:25 by yohan             #+#    #+#             */
/*   Updated: 2023/11/02 15:15:55 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		len;
	char	*dest;

	i = 0;
	start = 0;
	end = 0;
	len = 0;
	while (s1[end])
		end++;
	end--;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (start <= end)
	{
		dest[i] = s1[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* 
int main (void)
{
    char set[] = "car";
    char str[] = "car sis car";
    char *trimmed = ft_strtrim(str,  set);
        
    if (trimmed != NULL)
    {
        printf("%s\n", trimmed);
        free (trimmed);
    }
    return (0);
} */
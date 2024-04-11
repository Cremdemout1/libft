/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:06 by yohan             #+#    #+#             */
/*   Updated: 2023/12/01 12:24:21 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*full;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	full = (char *)malloc(((i + j + 1)) * sizeof(char));
	if (full == NULL)
		return (NULL);
	ft_strlcpy(full, s1, i + 1);
	ft_strlcat(full, s2, i + j + 1);
	return (full);
}

/* 
int main (int argc, char*argv[])
{
    if (argc != 3)
        return (0);
    else
    {
        printf("%s", ft_strjoin(argv[1], argv[2]));
        return (0);
    }
}
 */
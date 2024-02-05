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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
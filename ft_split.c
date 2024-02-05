/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:55 by yohan             #+#    #+#             */
/*   Updated: 2023/11/02 15:36:44 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			length;
	char			*dest;

	i = 0;
	length = ft_strlen((char *)s);
	if (start >= length)
		return ("");
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_words(const char *str, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] != c)
		{
			word_count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	int		i;
	int		start;
	int		str_index;
	char	**dest;

	word_count = ft_count_words((char *)s, c);
	i = 0;
	start = 0;
	str_index = 0;
	dest = (char **)malloc((word_count + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		start = i;
		while (s[i] && s[i] != c)
			i++;
		dest[str_index++] = ft_substr(s, start, i - start);
	}
	dest[str_index] = NULL;
	return (dest);
}

/*
int main (void)
{
	int		i;
	char	**words;

    i = 0;
    words = ft_split ("lorem,ipsum,dolor,sit,amet", ',');
    while (words[i])
    {
        printf("%s\n", words[i]);
        i++;
    }
    free (words);
    return (0);
}
*/
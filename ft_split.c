/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:55 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:47:38 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef struct s_variables
{
	int		word_count;
	int		i;
	int		start;
	int		str_index;
	char	**dest;
}s_variables;

char *ft_substr(char const *s,unsigned int start, size_t len)
{
	unsigned int i;
	size_t length;
	char *dest;

	i = 0;
	length = ft_strlen((char*)s);
	if(start >= length)
		return (NULL);
	dest = (char *) malloc (sizeof(char) * len + 1);
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
	struct s_variables var;
	var.word_count = ft_count_words((char *)s, c);
	var.i = 0;
	var.start = 0;
	var.str_index = 0;
	var.dest = (char **)malloc((var.word_count + 1) * sizeof(char *));
	if (var.dest == NULL)
		return (NULL);
	while (s[var.i])
	{
		if (s[var.i] == c)
		{
			var.i++;
			continue ;
		}
		var.start = var.i;
		while (s[var.i] && s[var.i] != c)
			var.i++;
		var.dest[var.str_index++] = ft_substr(s, var.start, var.i - var.start);
	}
	var.dest[var.str_index] = NULL;
	return (var.dest);
}


int main (void)
{
	int		i;
	char	**words;

    i = 0;
    words = ft_split ("lorem ipsum dolor sit amet", ' ');
    while (words[i])
    {
        printf("%s\n", words[i]);
        i++;
    }
    free (words);
    return (0);
}

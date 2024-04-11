/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:48:25 by yohan             #+#    #+#             */
/*   Updated: 2024/04/11 10:26:10 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_variables
{
	int		i;
	int		start;
	int		end;
	int		len;
	char	*dest;
}s_variables;

char	*ft_strtrim(char const *s1, char const *set)
{
	struct s_variables var;
	var.i = 0;
	var.start = 0;
	var.end = 0;
	var.len = 0;
	while (s1[var.end])
		var.end++;
	var.end--;
	while (s1[var.start] && ft_strchr(set, s1[var.start]))
		var.start++;
	while (var.end >= var.start && ft_strchr(set, s1[var.end]))
		var.end--;
	var.len = var.end - var.start + 1;
	var.dest = (char *)malloc((var.len + 1) * sizeof(char));
	if (var.dest == NULL)
		return (NULL);
	while (var.start <= var.end)
	{
		var.dest[var.i] = s1[var.start];
		var.start++;
		var.i++;
	}
	var.dest[var.i] = '\0';
	return (var.dest);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:24 by yohan             #+#    #+#             */
/*   Updated: 2024/04/24 10:25:23 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = ft_strlen(str);
	s = (char *)str;
	if (c == 0)
		return (s + i);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (s + i);
		i--;
	}
	return (NULL);
}
/* 
char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] != (unsigned char)c)
			len--;
		else
			return ((char *)str + len);
	}
	return (NULL);
}
 */
/* 
#include <string.h>

int main (void)
{
	char	*x;
	char	y;

	x = "123456789";
	y = 'a';
	printf("%s\n", strrchr(x, y));
	printf("%s", ft_strrchr(x, y));
	return (0);
}
*/

/*
int main (void)
{
	char	*str;
	char	*str2;

	str = "123456789";
	str2 = "0";
	if (!(str = ft_strrchr(str2, '\0')))
        printf("%s\n", "NULL");
	else
    {
        printf("%s", str);
        if (str != str2)
            printf("%s", "\nReturn value is false");
    }
	return (0);
}
*/
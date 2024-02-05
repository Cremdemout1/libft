/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:43:24 by yohan             #+#    #+#             */
/*   Updated: 2023/11/02 15:17:02 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0 && str[i] != c)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (0);
}

/*
int main (void)
{
	char	*x;
	char	y;

	x = "123456789";
	y = '\0';
	printf("%s\n", strrchr(x, y));
	printf("%s", ft_strrchr(x, y));
	return (0);
}

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
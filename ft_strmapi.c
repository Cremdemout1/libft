/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:42:26 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:36:41 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = (char *)malloc(((ft_strlen(s) + 1) * sizeof(char)));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main (int argc, char *argv[])
{
	(void) argc;
    printf("original string: %s\n", argv[1]);
    argv[1] = ft_strmapi(argv[1], ft_toupper1);
    printf("changed string: %s\n", argv[1]);
    free (argv[1]);
    return (0);
}
 */
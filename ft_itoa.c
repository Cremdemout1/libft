/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:27:40 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:34:06 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	end_of_str(int nb)
{
	int	len;

	len = 1;
	if (nb < 0)
		len++;
	while (nb / 10 != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		end;
	int		sign;
	char	*dest;

	sign = 1;
	end = end_of_str(n);
	dest = (char *)malloc((end + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	if (n < 0)
		sign = -1;
	dest[end] = '\0';
	while (end--)
	{
		dest[end] = (n % 10) * sign + 48;
		n /= 10;
	}
	if (sign == -1)
		dest[0] = '-';
	return (dest);
}

/* int	main(void)
{
	//char *ptr;
	char *str1 = ft_itoa(2147483647);
	char *str2 = ft_itoa(-2147483648);
	char *str3 = ft_itoa(0);
	char *str4 = ft_itoa(10);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	int i = -2147483648;
    
    while (i < 100)
    {
        ptr = ft_itoa(i);
        printf("%s\n", ptr);
        i++;
    } 

	free(str1);
	free(str2);
	free(str3);
	free(str4);
	//free (ptr);

	return (0);
}*/
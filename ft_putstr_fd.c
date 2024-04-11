/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:21:30 by yohan             #+#    #+#             */
/*   Updated: 2024/04/10 16:35:52 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/* 
int	main(void)
{
	int	fd;

    fd = open("ft_putstr.c", O_WRONLY | O_APPEND | O_CREAT, 0644);
    if (fd == -1)
        return (1);
    ft_putstr_fd("hello world", fd);
    return (0);
}
*/
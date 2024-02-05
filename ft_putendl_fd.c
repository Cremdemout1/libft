/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:44:10 by yohan             #+#    #+#             */
/*   Updated: 2023/11/02 15:50:17 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

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

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* 
int	main(void)
{
	int fd = open("1", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1)	
    {
        perror("open");
        return (1);
    }
	char	*str  = "lorem ipsum dolor sit amet";
    ft_putendl_fd(str, fd);
    return (0);
}
*/
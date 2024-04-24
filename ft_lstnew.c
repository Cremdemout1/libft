/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycantin <ycantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:36:26 by yohan             #+#    #+#             */
/*   Updated: 2024/04/17 13:59:04 by ycantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
/* 
int	main(void)
{
	int	content;

    content = 173;
    t_list *list = ft_lstnew(&content);   
    if (list)
        printf("%d\n", *(int *)list->content);
    free (list);
    return (0);
}
*/
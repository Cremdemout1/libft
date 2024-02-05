/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:05:11 by yohan             #+#    #+#             */
/*   Updated: 2023/10/30 10:22:46 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
        new -> next = *lst;
        *lst = new; 
    }
}

t_list	*ft_lstnew(void *content)
{
    t_list *list;

    list = malloc (sizeof (t_list));
    if (!list)
        return (NULL);
    list -> content = content;
    list -> next = NULL;
    return (list);
}
*/
int	ft_lstsize(t_list *lst)
{
	int	node_amount;

	node_amount = 0;
	while (lst)
	{
		node_amount++;
		lst = lst->next;
	}
	return (node_amount);
}
/* 
int	main(void)
{
    t_list *node1 = ft_lstnew("one");
    t_list *node2 = ft_lstnew("two");
    t_list *node3 = ft_lstnew("three");
    t_list *node4 = ft_lstnew("four");
    t_list *node5 = ft_lstnew("Last node");
    t_list *lst = NULL;
    ft_lstadd_front(&lst, node1);
    ft_lstadd_front(&lst, node2);
    ft_lstadd_front(&lst, node3);
    ft_lstadd_front(&lst, node4);
    ft_lstadd_front(&lst, node5);
    
    int size = ft_lstsize(lst);
    printf ("number of nodes: %d\n", size);
    while (lst)
    {
        t_list *temp = lst;
        lst = lst -> next;
        free (temp);
    }
    return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:13:05 by yohan             #+#    #+#             */
/*   Updated: 2023/10/29 12:03:03 by yohan            ###   ########.fr       */
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
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* 
int main (void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*lst;
	char	*str;

    node1 = ft_lstnew("one");
    node2 = ft_lstnew("two");
    node3 = ft_lstnew("three");
    node4 = ft_lstnew("four");
    node5 = ft_lstnew("Last node");
    lst = NULL;
    ft_lstadd_front(&lst, node1);
    ft_lstadd_front(&lst, node2);
    ft_lstadd_front(&lst, node3);
    ft_lstadd_front(&lst, node4);
    ft_lstadd_front(&lst, node5);
    ft_lstlast(lst);
    str = lst -> content;
    printf ("%s\n", str);
    return (0);
}
*/
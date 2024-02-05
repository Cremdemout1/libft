/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:56:39 by yohan             #+#    #+#             */
/*   Updated: 2023/11/17 08:59:16 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	while (*lst)
	{
		current = *lst;
		temp = current->next;
		del(current->content);
		free(current);
		*lst = temp;
	}
	*lst = NULL;
}

void	ft_free(void *content)
{
	free(content);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!new)
		return ;
	current = ft_lstlast(*lst);
	if (lst && current)
		current->next = new;
	else
		*lst = new;
}

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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr;
	const char	*copd;

	i = 0;
	ptr = (char *)dest;
	copd = (const char *)src;
	while (i < n)
	{
		ptr[i] = copd[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *node;

    node = lst;
    while (node)
    {
        f(node -> content);
        node = node -> next;
    }
}

static void	ft_toupper1(void *ch)
{
    int i;
    char *str;
    
	i = 0;
    str = (char *) ch;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
}


int main (void)
{
    t_list **listNode = malloc (sizeof (t_list *));
    
    t_list *node;
    t_list *node1;
    t_list *node2;
    
    *listNode = NULL;
    node = ft_lstnew("your");
    node1 = ft_lstnew("mom");
    node2 = ft_lstnew("is beautiful");

    ft_lstadd_back(listNode, node);
    ft_lstadd_back(listNode, node1);
    ft_lstadd_back(listNode, node2);
    
    printf("node: %s", (char *)node -> content);
    printf("node: %s", (char *)node1 -> content);
    printf("node: %s", (char *)node2 -> content);

    t_list *current = *listNode;
    
    current = *listNode;
    while (current)
    {
        printf("original content: %s", (char *)current -> content);
        current = current -> next;
    }
    current = *listNode;
    while (current)
    {
        ft_lstiter(current, ft_toupper1);
        current = current -> next;
    }
    
    current = *listNode;
    while (current)
    {
        printf("modified content: %s", (char *)current -> content);
        current = current -> next;
    }
    ft_lstclear(listNode, ft_free);
    return (0);
}

/* int main(void)
{
    char buffer[15];
    int i;
    t_list *node;

    i = 1;
    int len = ft_strlen(buffer);
    t_list *list;

    while (i <= 5) //assigning values to each node content
    {
        snprintf(buffer, sizeof(buffer), "node#%d: abcd", i);   
        char *content = (char *) malloc (sizeof (char) * len + 1);
        if (content == NULL)
            return (1);
        ft_memcpy(content, buffer, len + 1);
        node = ft_lstnew(content);
		ft_lstadd_back(&list, node);
		i++;
		free(content);
    }
    
    t_list *currentNode = list;
    while (currentNode) //reading each node inside t_list
    {
        printf ("%s\n", (char *)currentNode -> content);
        currentNode = currentNode -> next;
    }
    
    ft_lstiter(list, ft_toupper1);
    
    currentNode = list;
    while (currentNode) //reading each node inside t_list after modifying content
    {
        printf ("%s\n", (char *)currentNode -> content);
        currentNode = currentNode -> next;
    }
    return (0);
} */

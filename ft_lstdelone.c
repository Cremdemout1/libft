/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:32:40 by yohan             #+#    #+#             */
/*   Updated: 2023/10/30 14:20:19 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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


t_list	*ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst -> next)
        lst = lst -> next;
    return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *current)
{
    if (current)
    {
        current -> next = *lst;
        *lst = current; 
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
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

void	ft_free(void *content)
{
	free(content);
}
/* 
int main (void)
{
	int		i;
	t_list	*lst;
        char buffer[15];
	char	*content;
	t_list	*current;
	t_list	*new;
	t_list	*temp;

    i = 1;
    lst = NULL;
    
    while (i <= 5)
    {
        snprintf(buffer, sizeof(buffer), "node%d", i);
        content = (char *) malloc (sizeof(char) * (ft_strlen(buffer) + 1));
        if (content == NULL)
            return (1);
            
        ft_memcpy(content, buffer, ft_strlen(buffer) + 1);
        
        current = ft_lstnew(content);
        ft_lstadd_back (&lst, current);
        
        i++;
    }
    new = lst;
    temp = new -> next;
    if (i == 3)
        new = new -> next;
    if (new)
    {
        new -> next = temp -> next;
        ft_lstdelone (temp, ft_free);
    }
    new = lst;
    while (new)
    {
        printf ("%s\n", (char *)new -> content);
        new = new -> next;
    }
    return (0);
}
*/
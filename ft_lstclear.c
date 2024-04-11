/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:18:42 by yohan             #+#    #+#             */
/*   Updated: 2024/04/08 15:20:10 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_strlen(char *str)
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
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *current)
{
	if (current)
	{
		current->next = *lst;
		*lst = current;
	}
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
 */
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

/* 
int	main(void)
{
	int		i;
	t_list	*lst;
		char content[20];
	char	*mem_content;
	t_list	*node;
	t_list	*current;

	i = 1;
	lst = NULL;
	while (i <= 5)
	{
		snprintf(content, sizeof(content), "node #%d", i);
		mem_content = (char *)malloc(sizeof(char) * ft_strlen(content));
		if (mem_content == NULL)
			return (1);
		ft_memcpy(mem_content, content, ft_strlen(content) + 1);
		node = ft_lstnew(mem_content);
		ft_lstadd_back(&lst, node);
		i++;
		free(mem_content);
	}
	current = lst;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&lst, &ft_free);
	return (0);
}
 */
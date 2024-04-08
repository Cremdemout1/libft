/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycantin <ycantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:39:03 by ycantin           #+#    #+#             */
/*   Updated: 2024/04/08 13:04:33 by ycantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char yeap(unsigned int hi, char ha)
{
    (void) hi;
    if (ha > 96 && ha < 123)
    {
        return (ha - 32);
    }
    return (ha);
}

int main (int argc, char *argv[])
{
	(void) argc;
    if (!argv[1])
        return (1);
    printf("original string: %s\n", argv[1]);
    argv[1] = ft_strmapi(argv[1], yeap);
    printf("changed string: %s\n", argv[1]);
    free (argv[1]);
    return (0);
}

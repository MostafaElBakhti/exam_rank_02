/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:28:11 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/03 16:28:11 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include <unistd.h>

// int cmp(a , b)
// {
//     if(a > b)
//         return 0;
//     return 1 ; 
// }

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp = lst ; 
    int     swap ; 
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data ; 
            lst->data = lst->next->data ; 
            lst->next->data = swap ; 
            lst = tmp ; 
        }
        else
            lst = lst->next ;
    }
    lst = tmp ; 
    return (lst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:55:16 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/09 16:55:16 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *current ; 
    int tmp;
    int swap;
    if (!lst)
        return (lst);
    swap = 1;
    while (swap)
    {
        swap = 0 ; 
        current = lst;
        while (current->next)
        {
            if((*cmp)(current->data, current->next->data) == 0)
            {
                tmp = current->data;
                current->data = current->next->data;
                current->next->data = tmp;
                swap = 1;
            }

            current = current->next;
        }
        
    }
    return lst;
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *current;
    int swap ;
    swap = 1;

    int tmp;
    while(swap)
    {
        swap = 0 ;
        current = lst ;
        while(current->next)
        {
            if((*cmp)(current->data , current->next->data) == 0)
            {
                tmp = current->data ; 
                current->data = current->next->data ;
                current->next->data = tmp ; 
                swap = 1 ;
            }
            current = current->next ;
        }
    }
    return lst ;
}
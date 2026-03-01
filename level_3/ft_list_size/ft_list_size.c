/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:03:42 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/01 15:03:42 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int size = 0 ;
    while (begin_list)
    {
        size++;
        begin_list = begin_list->next ; 
    }
    return size ;
}

int main()
{
    t_list node1 ;
    t_list node2 ;
    t_list node3 ;

    node1.data = "Node 1";
    node2.data = "Node 2";
    node3.data = "Node 3";

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    int size = ft_list_size(&node1);
    printf("Size of the list: %d\n", size); 

    return 0;
}
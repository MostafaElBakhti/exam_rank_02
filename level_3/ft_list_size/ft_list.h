/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:04:02 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/01 15:04:02 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


#endif
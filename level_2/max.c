/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 13:29:16 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/15 13:29:16 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{   
    int tmp = tab[0] ;
    int i = 1 ; 
    while (i < len)
    {
        if (tab[i] > tmp)
            tmp = tab[i] ; 
        i++;
    }
    return tmp ; 
}

int main ()
{
    int arr[] = {11003,70,711,3} ; 
    int len = 4 ; 
    printf("%d" ,max(arr , len) ) ; 
    return 0 ; 
}
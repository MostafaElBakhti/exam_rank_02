/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:25:32 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/01 15:25:32 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr ;
    int size ; 
    int i ;
    if (start <= end)
    {
        size = end - start + 1 ;
        arr = malloc(sizeof(int) * size) ; 
        i = 0 ;
        while (start <= end)
        {
            arr[i] = start ; 
            start++;
            i++;
        }
    }else 
    {
        size = start - end + 1 ; 
        arr = malloc(sizeof(int) * size) ; 
        i = 0 ;
        while (end <= start)
        {
            arr[i] = start ; 
            start--;
            i++;
        }
    }
    return arr;
}   

int main()
{
    int *test = ft_range(1 , -3);
    int i = 0 ; 
    while (i < 5 )
    {
        printf("%d / " , test[i++]);
    }
    free(test);
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:18:50 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/09 17:18:50 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0 ;
    int j ; 
    int tmp = 0;
    while (i < size)
    {
        j = i + 1 ;
        while (j < size)
        {
            if(tab[i] > tab[j])
            {
                tmp  = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp ;
            }
            j++;
        }
        
        i++;
    }
}

int main()
{
    int tab[] = {7 , 8 , 1, 0 , 2,3};
    sort_int_tab(tab,6);
    int i = 0 ;
    while (i < 6)
    {
        printf("%d ", tab[i]);
        i++;
    }
}
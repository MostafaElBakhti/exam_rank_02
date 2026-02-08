/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:07:31 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/08 20:07:31 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc , char *argv[]) 
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        exit(0);
    }

    int i = 0 ; 
    int count ; 
    while(argv[1][i])
    {
        if ( (argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))


        while(count > 0)
        {
            printf("%c" , argv[1][i]) ; 
            count-- ; 
        }
        
        count = 0 ; 
        i++;
    }

    write(1, "\n", 1);
}
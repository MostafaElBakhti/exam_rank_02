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
        return (0);
    }

    int i = 0 ; 
    int count ; 
    while(argv[1][i])
    {
        if ( (argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                count = argv[1][i] - 'a' + 1 ; 
            else 
                count = argv[1][i] - 'A' + 1 ; 
        while(count > 0)
        {
            write(1, &argv[1][i], 1) ;
            count-- ; 
        }
        }else{
            write(1, &argv[1][i], 1) ;
        }

        count = 0 ; 
        i++;
    }

    write(1, "\n", 1);
    return (0);
}
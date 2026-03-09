/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:27:02 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/09 17:27:02 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i ;
    int end;
    i = 0 ; 
    while (argv[1][i])
        i++;
    i--;
    while(i >= 0)
    {
        if(argv[1][i] == ' ' || argv[1][i] == '\t' || i == 0)
        {
            if(i == 0)
                end = i;
            else 
                end = i + 1 ;
            
            while (argv[1][end] && argv[1][end] != ' ' && argv[1][end] != '\t')
            {
                write(1, &argv[1][end], 1);
                end++;
            }

            if( i > 0)
                write(1, " ", 1);
            
        }
        i--;
    }
    write(1, "\n", 1);
}
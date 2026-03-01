/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:53:42 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/15 20:53:42 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc , char *argv[])
{
    if (argc != 3 )
    {
        write(1,"\n",1) ; 
        return (0);
    }

    int i = 0 ; 
    int j = 0 ; 

    while (argv[1][i] && argv[2][j])
    {
        if(argv[1][i] == argv[2][j])
            i++;
        j++ ; 
    }

    if(argv[1][i] == '\0')
    {
        write(1,argv[1],i) ; 
    }
    
    write(1, "\n", 1);
    return (0);
}

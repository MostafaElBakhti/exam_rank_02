/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:14:06 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 15:14:06 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int already_printed(char c)
{
    static int i = 0 ; 
    static char seen[256] ; 
    int j = 0 ; 
    while (j < i )
    {
        if (seen[j] == c)
            return 1 ; 
        j++ ; 
    }
    seen[i++] = c ;
    return 0 ; 
}


int main(int argc ,char *argv[])
{
    if (argc != 3 )
    {
        write(1,"\n",1) ;
        return (0);
    }

    int i = 0 ; 
    int j ;
    while (argv[1][i])
    {
        j = 0 ; 
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j] && !(already_printed(argv[i][j])))
            {
                write(1,&argv[1][j] , 1) ; 
                break;
            }
            j++;
        }
        
        i++;
    }
    

    write(1,"\n",1) ;
    return (0) ; 
}
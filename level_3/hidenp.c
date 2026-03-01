/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 21:37:18 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/01 21:37:18 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc,char **argv)
{
    if(argc != 3)
    {
        write(1,"\n",1);
        return (0);
    }

    int i ;
    int j ;
    i = 0 ;
    int is_found = 0 ; 
    int len = 0 ;
    while (argv[1][i])
    {
        j = len ;
        len = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
            {
                is_found = 1 ; 
                len = j;
                break;
            }else{
                is_found = 0 ; 
            }
        if (is_found == 0)
        {
            write(1,"i\n",2);
            return (0);
        }
            j++;
        }  
        i++;
    }


    return (0);
}
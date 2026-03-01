/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:37:09 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 15:37:09 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc ,char *argv[])
{
    if (argc != 2 )
    {
        write(1,"\n",1) ;
        return (0);
    }

    int i = 0 ; 
    while (argv[1][i])
    {
        i++ ;
    }
    
    i--;
    int end = i ; 
    while (argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        i--;
    }
    i++;
    
    while(i <= end)
    {
    write(1,&argv[1][i],1) ;
    i++ ; 
    }
    write(1,"\n",1) ;
    return 0 ; 

}
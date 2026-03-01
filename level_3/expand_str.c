/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:59:47 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/01 14:59:47 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc ,char **argv)
{
    int i ; 
    int in_word ; 
    if (argc != 2)
    {
        write(1,"\n",1) ;
        return (0) ;
    }

    i = 0 ; 
    in_word = 0 ; 
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
    

    while (argv[1][i])
    {
        if ((argv[1][i] == ' ' || argv[1][i] == '\t') && in_word == 1)
        {
            write(1," ",1);
            write(1," ",1);
            write(1," ",1);
            in_word = 0 ;
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            i--;
            
        }
        else
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                in_word = 1 ;
                write(1,&argv[1][i],1);
            }
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
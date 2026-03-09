/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:02:52 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/08 17:02:52 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    int end = 0 ;
    int i = 0 ;

    while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        i++;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        write(1, &argv[1][i], 1);
        i++;
        end++;
    }
    printf("end = %d\n", end);
    while (argv[1][i] == ' ')
        i++;
    
    while (argv[1][i])
    {
        while (argv[1][i] && argv[1][i] == ' ' && argv[1][i+1] == ' ')
        {
            i++;
        }
        write(1,&argv[1][i],1);
        i++;
    }
    

}
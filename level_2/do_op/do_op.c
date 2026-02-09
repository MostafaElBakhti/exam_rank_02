/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 01:53:12 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/09 01:53:12 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int main (int argc , char *argv[]) 
{
    // if (argc != 3)
	// {
	// 	write(1,"\n",1);
	// 	return(0);
	// }

    int i = 0 ; 
    int num1 = 0 ;
    int num2 = 0 ;
    int isNum1 = 0 ; 
    int isNum2 = 0 ;

    int len = 0 ; 
    while (argv[2][len])
    {
        len++;
    }
    printf("%d\n\n" , len) ; 
    // if (len != 1)
    // {
    //     write(1, "hoo\n", 4);
    //     return (0);
    // }
    if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%') || len != 1)
    {
        write(1, "hoo\n", 4);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] >= '0' && argv[1][i] <= '9')
        {
            isNum1 = 1 ;
        }else{
            isNum1 = 0 ; 
            break ;
        }
        i++;
    }
    i = 0 ; 
    while (argv[3][i])
    {
        if (argv[3][i] >= '0' && argv[3][i] <= '9')
        {
            isNum2 = 1 ;
        }else{
            isNum2 = 0 ; 
            break ;
        }
        i++;
    }
    if (isNum1 && isNum2)
    {
        num1 = atoi(argv[1]) ;
        num2 = atoi(argv[3]) ;
    }else{
        write(1, "noo\n", 4);
        return (0);
    }

    printf("%d\n",num1) ;
    printf("%d\n",num2) ;
    return (0) ;

}
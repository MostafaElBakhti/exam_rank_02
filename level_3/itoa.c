/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:35:26 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/07 16:35:26 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_len(long n)
{
    int len = 0 ; 
    if(n <= 0)
        len = 1;
    while(n)
    {
        n /= 10;
        len++;
    }
    return len ;
}


char	*ft_itoa(int nbr)
{
    long n = nbr ; 
    int len = ft_len(n);
    char *res = malloc(len + 1);
    if (!res)
        return NULL ;
    res[len] = '\0';

    if(n < 0)
    {
        res[0] = '-';
        n = -n;
    }
    if(n == 0)
        res[0] = '0';
    while (n > 0)
    {
        len--;
        res[len] = (n%10) + '0';
        n /= 10;
    }
    return res;

}

int main()
{
    char *test = ft_itoa(-21);
    printf("%s" , test);
}








// char	*ft_itoa(int nbr)
// {
//     printf("/*-----------------------/*\n");
//     int sign = 1;
//     int len = 0 ; 

//     if(nbr == 0)
//     {
//         len = 1 ;
//     }

//     if(nbr < 0)
//     {
//         len = 1 ;
//         sign = -1;
//         nbr = -nbr ;
//     }
//     int tmp = nbr ; 
//     while (tmp > 0)
//     {
//         len++;
//         tmp /= 10;
//     }
//     // printf("%d" , len) ;
//     char *res ;
//     if(sign == 1)
//         res = malloc(sizeof(char) * (len + 1) );
//     else
//         res = malloc(sizeof(char) * (len + 2) );
    
//     if (!res)
//         return NULL ;

//     res[len] = '\0' ;
//     len--;

//     if(nbr == 0)
//     {
//         res[0] = '0';
//         return res;
//     }


//     while(len > 0)
//     {
//         res[len] = (nbr % 10) + '0';
//         nbr /= 10;
//         len--;
//     }
//     if(sign == -1)
//         res[0] = '-';
//     else
//         res[0] = (nbr % 10) + '0';

//     return res; 
    
// }
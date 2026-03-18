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
    char *test = ft_itoa(-2747471);
    printf("%s" , test);
}

int ft_len(long n)
{
    int len = 0 ; 
    if( n <= 0)
        len = 1 ;
    while(n)
    {
        n = n/10 ; 
        len++;
    }
    return len ; 
}

char	*ft_itoa(int nbr)
{
    long n = nbr ; 
    int len = ft_len(n) ;
    char *res = malloc(len + 1 );

    res[len] = '\0';

    if(n < 0)
        res[0] = '0';

    while(n > 0)
    {
        len--;
        res[len] = (n % 10) + '0';
        n = n / 1 ;0 
    }
    return res ; 
}
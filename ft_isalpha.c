/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:20:09 by thamada           #+#    #+#             */
/*   Updated: 2024/04/18 19:30:15 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int  c)
{
    if((65 <= c && c <= 90) || (97 <= c && c <= 122))
        return(1);
    return(0);
}
#include <stdio.h>

int main()
{
    char c = 'a';
    if(ft_isalpha(c))
        printf("okay");
    else
        printf("nop");
}
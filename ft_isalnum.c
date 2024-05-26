/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:29:38 by takurohamad       #+#    #+#             */
/*   Updated: 2024/04/18 13:47:12 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int  c)
{
    if((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
        return(1);
    return(0);
}
#include <stdio.h>

int main()
{
    char c = '-';
    if(ft_isalnum(c))
        printf("okay");
    else
        printf("nop");
}
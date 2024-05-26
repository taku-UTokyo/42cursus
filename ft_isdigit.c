/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:02:26 by takurohamad       #+#    #+#             */
/*   Updated: 2024/04/18 13:25:02 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int  c)
{
    if(48 <= c && c <= 57)
        return(1);
    return(0);
}

#include <stdio.h>
int main()
{
    char c = 'a';
    if(ft_isdigit(c))
        printf("okay");
    else
        printf("nop");
}
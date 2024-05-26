/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:09:27 by takurohamad       #+#    #+#             */
/*   Updated: 2024/04/18 20:19:21 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int  c)
{
    if(32 <= c && c <= 126)
        return(1);
    return(0);
}

#include <stdio.h>
int main()
{
    char c = 'h';
    if(ft_isprint())
        printf("okay");
    else
        printf("nop");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:27:34 by takurohamad       #+#    #+#             */
/*   Updated: 2024/04/19 11:47:46 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int  c)
{
    if(0 <= c && c <= 127)
        return(1);
    return(0);
}
#include <stdio.h>

int main()
{
    char c = '∂';
    if(ft_isascii(c))
        printf("okay");
    else
        printf("nop");
}
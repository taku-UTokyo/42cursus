/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:10:46 by thamada           #+#    #+#             */
/*   Updated: 2024/04/19 13:54:45 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const  char *str)
{
    size_t len;
    len = 0;
    while(*str)
    {
        str++;
        len++;
    }
    return(len);
}

#include <stdio.h>

int main()
{
    const char *str = "";
    printf("\"%s\"は%zu文字\n", str, ft_strlen(str));
}
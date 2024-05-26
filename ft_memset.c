/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:54:52 by thamada           #+#    #+#             */
/*   Updated: 2024/05/26 22:04:46 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *buf, int ch, size_t n)
{
    size_t i;
    char *ptr;

    i = 0;
    ptr = buf;
    while(i < n)
    {
        ptr[i] = ch;
        i++;
    }
    return(buf);
}

#include <stdio.h>

int main()
{
    int i;
    i = 0;

    char buf[11] = "0123456789";
    ft_memset(buf, 'A', 3);
    printf("%s\n", buf);
}
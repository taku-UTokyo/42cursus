/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:22:54 by thamada           #+#    #+#             */
/*   Updated: 2024/05/26 18:10:11 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_bzero(void   *s, size_t n)
{
    unsigned char *ptr;
    
    ptr = (unsigned char *)s;
    while(n > 0)
    {
        *ptr = 0;
        n--;
        ptr++;
    }
}

int main()
{
    int i;
    i = 0;

    char s[8] = "1987123";
    ft_bzero(s, 3);
    printf("%s\n", s);
}
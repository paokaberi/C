/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:53:08 by andresga          #+#    #+#             */
/*   Updated: 2023/09/25 13:30:42 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *p;
    size_t c;

    c = 0;
    p = malloc(sizeof(char) * (len + 1));
    if (!p)
        return NULL;
    while (c <= len)
    {
        p[c] = s[c + start];
        c++;
    }
    p[c] = '\0';
    return (p);
}

/*int main(void)
{
    char s1[] = {"Hola buenas"};
    printf("%s", ft_substr(s1,2,2));
}*/

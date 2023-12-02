/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andresga <andresga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:59:54 by andresga          #+#    #+#             */
/*   Updated: 2023/12/02 12:15:59 by andresga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (size > 0)
	{
		while (count < (size - 1) && src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	dest[] = {"Hola"};
	char	src[] = {"AAAA"};

	printf("%lu",strlcpy(dest,src,0));
	printf("%s",dest);
}*/

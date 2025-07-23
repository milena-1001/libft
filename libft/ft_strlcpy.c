/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:47:02 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:37:20 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *orig, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (orig[i] != '\0')
		i ++;
	if (size > 0)
	{
		j = 0;
		while (j < size - 1 && orig[j] != '\0')
		{
			dest[j] = orig[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

// int main()
// {
// 	char orig[]= "ooo";
// 	char dest[]= "eee";

// 	size_t len = ft_strlcpy(dest, orig, sizeof(dest));

// 	printf("la cadena copiada es: %s\n", dest);
// 	printf("la longitud de origen es: %zu\n", len);
// 	return 0;
// }
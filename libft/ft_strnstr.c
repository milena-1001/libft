/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 04:56:44 by milferna          #+#    #+#             */
/*   Updated: 2025/02/18 15:30:28 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *cad1, const char *cad2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (cad2[0] == '\0')
		return ((char *)cad1);
	while (cad1[i] != '\0' && i < n)
	{
		if (cad1[i] == cad2[0])
		{
			j = 0;
			while (cad2[j] != '\0' && i + j < n && cad1[i + j] == cad2[j])
				j ++;
			if (cad2[j] == '\0')
				return ((char *)&cad1[i]);
		}
		i ++;
	}
	return (NULL);
}
// int main()
// {
// 	const char *cad1[] = "hola mundo";
// 	const char *cad2[] = "mundo";
// 	char *posicion = ft_strnstr(cad1, cad2, 10);
// 	printf("encontrado en la posicion %c", posicion);
// }
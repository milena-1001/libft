/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:47:02 by milferna          #+#    #+#             */
/*   Updated: 2025/02/18 14:26:01 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *cad1, const char *cad2, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(cad1);
	src_len = ft_strlen(cad2);
	i = dest_len;
	j = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (cad2[j] && (i + 1) < size)
	{
		cad1[i] = cad2[j];
		i ++;
		j ++;
	}
	cad1[i] = '\0';
	return (dest_len + src_len);
}

// int main()
// {
// 	char cad1[] = "hola";
// 	char cad2[15] = "buenas";
// 	size_t longitud = ft_strlcat(cad1,cad2,sizeof(cad1));
// 	printf("%s", cad2);
// 	printf("%zu", longitud);
// 	return 0;
// }
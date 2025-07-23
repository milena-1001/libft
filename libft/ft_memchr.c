/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 21:12:21 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 02:39:58 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *)buf)[i] == (unsigned char)c)
			return ((void *)&buf[i]);
		i ++;
	}
	return (NULL);
}
// int main()
// {
// 	//buf es un puntero a un bloque de memoria
// 	//c es el byte que buscamos dentro de ese bloque de memoria
// 	//count es el numero de bytes a examinar

// 	char cadena[] = "hola buenas";
// 	char *resultado = ft_memchr(str, 's', sizeof(cadena));

// 	if (resultado)
// 		printf("encontrado: %s\n", resultado);
// 	else
// 		printf("no encontrado");
// 	return 0;
// }

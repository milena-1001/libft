/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:52:22 by milferna          #+#    #+#             */
/*   Updated: 2025/02/26 21:45:55 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destino, const void *origen, size_t num)
{
	const unsigned char	*o;
	unsigned char		*d;

	d = destino;
	o = origen;
	if (destino == NULL && origen == NULL)
		return (NULL);
	while (num--)
	{
		*d++ = *o++;
	}
	return (destino);
}
/*int main()
{
	char origen[] = "holaa";
	char destino[] = "eeeeeeeeee"; //le pongo espacio suficiente para la copia
	ft_memcpy(destino, origen, sizeof(origen));
	printf("%s\n", destino);
	
	return 0;
}*/

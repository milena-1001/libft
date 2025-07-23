/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:40:15 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:53:16 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t	i;
	char	letter;

	i = 0;
	letter = (char)c;
	while (string[i] != '\0')
	{
		if (string[i] == letter)
			return ((char *)&string[i]);
		i ++;
	}
	if (letter == '\0')
		return ((char *)&string[i]);
	return (NULL);
}
// int main()
// {
// 	const char cad[] = "mila)bena";
// 	char letra = 'a';
// 	char *resultado = ft_strchr(cad, letra + 200);

// 	printf("%c\n", letra + 200);
// 	if (resultado == NULL)
// 		printf("no se ha encontrado el caracter 
//%c en la cadena %p", letra, resultado);
// 	else
// 		printf("se ha encontrado el caracter %c 
//y su direccion de memoria es %p", letra, resultado);
// 	return 0;	
// }
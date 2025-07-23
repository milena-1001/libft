/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:28:45 by milferna          #+#    #+#             */
/*   Updated: 2025/02/22 22:31:26 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*hola;

	hola = malloc (nmemb * size);
	if (!hola)
		return (NULL);
	ft_bzero(hola, nmemb * size);
	return (hola);
}
// int main()
// {
// 	char * ee = ft_calloc (sizeof(int), 5);
// 	size_t i = 0;
// 	size_t nmemb = sizeof(int);
// 	if (ee == NULL)
// 	{
// 		printf("ha fallao");
// 	}
// 	while( i < nmemb)
// 	{
// 		printf("%d\n", ee[i]);
// 		 i ++;
// 	}
// 	free (ee);
// 	return 0;
// }
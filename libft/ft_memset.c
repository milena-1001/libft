/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:08:31 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:32:14 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int valor, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num--)
	{
		*p++ = (unsigned char)valor;
	}
	return (ptr);
}
// int main ()
// {
// 	char vector[9];
// 	ft_memset(vector, '$', 10);
// 	for(int i=0; i<9; i++)
// 	{
// 		printf("%c", vector[i]);
// 	}
// 	return 0;
// }
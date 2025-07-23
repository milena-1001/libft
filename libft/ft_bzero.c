/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:37:28 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:30:43 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num--)
		*p++ = '\0';
}
// int main()
// {
// 	char vector[10];
// 	ft_bzero(vector, sizeof(vector));
// 	for (int i=0; i<5; i++)
// 	{
// 		printf("%c", vector[i]);
// 	}
// 	return 0;
// }

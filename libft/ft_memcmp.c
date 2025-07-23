/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 21:54:22 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 02:41:22 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return (((const unsigned char *)s1)[i] -
					((const unsigned char *)s2)[i]);
		i ++;
	}
	return (0);
}

// int main()
// {
// 	char cad1[] = {1,2,5,7};
// 	char cad2[] = {1,2,5,6};

// 	printf("%i\n", memcmp((const void*)cad1, 
// 	(const void*)cad2, 4 * sizeof(int)));

// 	return 0;
// }
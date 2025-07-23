/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:51:33 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 02:39:11 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *cad1, const char *cad2, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count && cad1[i] != '\0' && cad2[i] != '\0')
	{
		if (cad1[i] != cad2[i])
			return ((unsigned char)cad1[i] - (unsigned char)cad2[i]);
		i ++;
	}
	if (i < count)
		return ((unsigned char)cad1[i] - (unsigned char)cad2[i]);
	return (0);
}

// int main ()
// {
// 	cad1[] = "hola";
// 	cad2[] = "holA";

// 	printf("%i\n", ft_strncmp(&cad1, &cad2, 4));
// 	return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:25:12 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:36:48 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *) src;
	i = n;
	if (!dest && !src)
		return (dest);
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i --;
		}
	}
	return (dest);
}
// int main()
// {
// 	char destino[1] = "h";
// 	const char *fuente = "ee";

// 	char *result = ft_memmove (destino, fuente, 3);
// 	printf("%s\n", result);

// 	return 0;
// }
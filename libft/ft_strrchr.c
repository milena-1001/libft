/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:59:34 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:35:50 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*letra;
	size_t	i;

	if (c > 255)
		c = c % 256;
	letra = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			letra = (char *)&s[i];
		i ++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (letra);
}

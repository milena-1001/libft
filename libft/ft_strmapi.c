/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:35:10 by milferna          #+#    #+#             */
/*   Updated: 2025/03/01 18:48:25 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strmapi;

	if (!s || !f)
		return (NULL);
	strmapi = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!strmapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strmapi[i] = f(i, s[i]);
		i ++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}

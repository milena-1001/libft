/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:39:24 by milferna          #+#    #+#             */
/*   Updated: 2025/02/18 23:27:03 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*hello;

	i = 0;
	hello = malloc(ft_strlen(s) + 1);
	if (!hello)
		return (NULL);
	while (s[i] != '\0')
	{
		hello[i] = s[i];
		i ++;
	}
	hello[i] = '\0';
	return (hello);
}
// int main()
// {
// 	char buenas[]= "holaholaaafdvrevee";
// 	char *hello = ft_strdup(buenas);
// 	if (!hello)
// 		return 1;
// 	printf("%s\n", hello);
// 	free (hello);
// 	return 0;
// }
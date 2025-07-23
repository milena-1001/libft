/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:24:18 by milferna          #+#    #+#             */
/*   Updated: 2025/03/01 22:53:12 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	len_calculation(char const *s1, char const *s2,
size_t *len1, size_t *len2)
{
	*len1 = ft_strlen(s1);
	*len2 = ft_strlen(s2);
}

static void	initialization(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	initialization(&i, &j);
	if (!s1 || !s2)
		return (NULL);
	len_calculation (s1, s2, &len1, &len2);
	strjoin = ft_calloc (sizeof(char), len1 + len2 + 1);
	if (!strjoin)
		return (NULL);
	while (s1[i] != '\0')
	{
		strjoin[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		strjoin[i + j] = s2[j];
		j ++;
	}
	strjoin[i + j] = '\0';
	return (strjoin);
}

// int main()
// {
// 	char const *cad1 = "hola";
// 	char const *cad2 = "mundo";

// 	printf("%s\n", ft_strjoin(cad1, cad2));
// 	return 0;
// }
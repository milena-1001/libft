/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:08:55 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:57:12 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	substr_len;

	str_len = ft_strlen(s);
	if (!s || str_len < start)
		return (0);
	if ((len + start) >= str_len)
		substr_len = str_len - start;
	else
		substr_len = len;
	return (substr_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_zeros;
	size_t	i;
	size_t	str_len;

	str_len = len_substr (s, start, len);
	i = 0;
	substr_zeros = malloc(str_len + 1);
	if (!substr_zeros)
		return (NULL);
	while (i < str_len)
	{
		substr_zeros[i] = s[i + start];
		i ++;
	}
	substr_zeros[i] = '\0';
	return (substr_zeros);
}
// int main(void)
// {
// 	char *h = "hol";
// 	char *m = ft_substr(h, 1,7);
// 	printf("%s", m);
// 	return 0;
// }
